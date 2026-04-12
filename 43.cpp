//next permutaion
/*
Iterate array from end and find the first index (pivot) (i.e,  arr[i] < arr[i + 1]).
If pivot index does not exist, then the given sequence in the array is the largest as possible. So, reverse the complete array. For example, for [3, 2, 1], the output would be [1, 2, 3]
Otherwise, Iterate the array from the end and find for the successor (rightmost greater element) of pivot in suffix.
Swap the pivot and successor
Minimize the suffix part by reversing the array from pivot + 1 till n.
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
	vector<int>perm={2,4,1,7,5,0};
	int n=6;
	int pivot=-1;
	int nextmostgreater;
	for(int i=n-2;i>=0;i--){
	    if(perm[i]<perm[i+1]){
	        pivot=i;
	        break;
	    }
	}
	if(pivot==-1){
		reverse(perm.begin(),perm.end());
		for(auto it:perm)cout<<it<<" ";
		return 0;
	}
	for(int i=n-1;i>=0;i--){
	    if(perm[i]>perm[pivot]){
	        nextmostgreater=i;
	        break;
	    }
	}
	swap(perm[pivot],perm[nextmostgreater]);
	reverse((perm.begin()+pivot+1),perm.end());
	for(auto it:perm)cout<<it<<" ";
}

//using recursion (n*n!)
#include <bits/stdc++.h>
using namespace std;
void permutation(int idx,vector<int>&v, vector<vector<int>> &perms,
                      vector<int>&temp,vector<int>&visited,int n){
    if(idx==n){
        perms.push_back(temp);
        return ;
    }
    for(int i=0;i<n;i++){
       if(!visited[i]){ 
           temp[idx]=v[i];
           visited[i]=1;
           permutation(idx+1,v,perms,temp,visited,n);
           visited[i]=0;
       }
    }
    
}
int main() {
	// your code goes here
	vector<int>v={1,2,3};
    vector<vector<int>> perms;
    vector<int>temp(3);
    vector<int>visited(3,0);
    permutation(0,v,perms,temp,visited,3);
    sort(perms.begin(),perms.end());
	for(auto i:perms){
	    for(auto j:i){
	        cout<<j<<" ";
	    }cout<<endl;
	}
	vector<int>nextperm={2,1,3};
	int cnt=0;
	for(int i=0;i<perms.size();i++){
	    cnt++;
	    if(perms[i]==nextperm)break;
	}
	cout<<"next permutation is"<<endl;
	for(auto it:perms[cnt])cout<<it<<" ";
	return 0;
}