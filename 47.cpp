//MAXIMUM PRODUCT SUBARRAY
//APPROACH -1 TC-O(N^2)  ---> CHECK EVERY SUBARRAY
//BETTER APPROACH -2 TC-O(N)  ---> TRAVERSING IN BOTH DIRECTION
#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int maxprodsubarray(vector<int>arr,int n){
    
    int leftmax=arr[0];
    int rightmax=arr[n-1];
    int res=INT_MIN;
    for(int i=1;i<n;i++){
        if(arr[i]!=0)leftmax*=arr[i];
        else leftmax=1;
        if(arr[n-i-1]!=0)rightmax*=arr[n-i-1];
        else rightmax=1;
        
        res=max(res,max(leftmax,rightmax));
    }
    return res;
}
int main() {
    
	vector<int>arr={-2,6,-3,-10,0,2,-20,-8};
	int n=8;
	int res=maxprodsubarray(arr,n);
	
	cout<<res;
	
	return 0;
}

//BETTER APPROACH -3 GREEDY MIN MAX PROD O(N)
#include <iostream>
#include <vector>
using namespace std;
int maxprodsubarray(vector<int>arr,int n){
    
    int currmin=arr[0];
    int currmax=arr[0];
    int res=arr[0];
    for(int i=1;i<n;i++){
        int temp=max(arr[i],max(arr[i]*currmax,arr[i]*currmin));
        currmin=min(arr[i],min(arr[i]*currmin,arr[i]*currmax));
        currmax=temp;
        res=max(res,currmax);
    }
    return res;
}
int main() {
    
	vector<int>arr={-2,6,-3,-10,0,2};
	int n=6;
	int res=maxprodsubarray(arr,n);
	
	cout<<res;
	
	return 0;
}

// max prod subset

#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	getline(cin,s);
	if(s.front()=='[' && s.back()==']'){
	    s=s.substr(1,s.length()-2);
	}
	stringstream ss(s);
	string token;
	vector<int>v;
	while(getline(ss,token,',')){
	    int num=stoi(token);
	    v.push_back(num);
	}
	sort(v.begin(),v.end());
	if(v.size()==1){
	    cout<<v[0];
	    return 0;
	}
	if(v[0]==0 && v[v.size()-1]==0){
	    cout<<0;
	    return 0;
	}
	if(v[0]<0 && v[1]==0 && v[v.size()-1]==0){
	    cout<<0;
	    return 0;
	}
	int res=1;
	for(int i=0;i<v.size();i++){
	    if(v[i]==0)continue;
	    else if(v[i]<0 && i!=v.size()-1 && v[i+1]<0){
	        res*=v[i];
	        res*=v[i+1];
	        i++;
	    }
	    else if(v[i]>0)res*=v[i];
	}
	cout<<res;
	return 0;
}
// 2nd approach 
int main() {
	// your code goes here
	vector<int>v={2,-3,-4,1,2,-4,0};
	if(v.size()==1){
	    cout<<v[0];
	    return 0;
	}
	int negcnt=0;
	int zerocnt=0;
	int maxneg=INT_MIN;
	int res=1;
	for(int i=0;i<v.size();i++){
	    if(v[i]==0){
	        zerocnt++;
	        continue;
	    }
	    else if(v[i]<0){
	        negcnt++;
	        maxneg=max(maxneg,v[i]);
	    }
	    res*=v[i];
	}
	if(negcnt==1 && negcnt+zerocnt==v.size()){
	    cout<<0;
	    return 0;
	}
	if(zerocnt==v.size()){
	    cout<<0;
	    return 0;
	}
	if(negcnt%2!=0){
	    cout<<res/maxneg;
	    return 0;
	}
	cout<<res;
	return 0;
}
