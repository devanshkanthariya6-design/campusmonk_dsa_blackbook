//brute force
#include <bits/stdc++.h>
using namespace std;
void rotateonce(vector<int>&v){
    int first=v[0];
    for(int i=1;i<v.size();i++){
        v[i-1]=v[i];
    }
    v[v.size()-1]=first;
}
int main() {
	// your code goes here
	vector<int>a={1,2,3,4,5};
	vector<int>b={1,2,3,4,5};
	int n=a.size();
	if(a==b){
	    cout<<0;
	    return 0;
	}
	int res=0;
	for(int i=1;i<=n;i++){
	    rotateonce(a);
	    res++;
	    if(a==b)break;
	}
	cout<<min(res,n-res);////////
	return 0;
}

//better concatenate-------!!!!!!!!!doesnt work for multidigitnumber
#include <bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
	vector<int>a={1,2,3,4,5};
	vector<int>b={3,4,5,1,2};
	string s1="";
	string s2="";
	for(auto num:a){
	    s1+=to_string(num);
	}
	for(auto num:b){
	    s2+=to_string(num);
	}
	s1.append(s1);
	int res=s1.find(s2);
	int n = a.size();
	cout<<min(res,n-res);
	return 0;
}