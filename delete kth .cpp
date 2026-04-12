#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n,k;
	cin>>n>>k;
	vector<int>v(n,0);
	int dltd=0;
	int i=k-1;
	int skip=k-1;
	while(dltd!=n-1){
	    if(v[i%n]==0 && skip==k-1){
	        v[i%n]=1;
	        dltd++;
	        skip=0;
	    }
	    else if(v[i%n]==0){
	        skip++;
	    }
	    i++;
	}
	for(int i=0;i<v.size();i++){
	    if(v[i]==0/*dont use 1 as it is for deleted*/){
	        cout<<i+1;
	        break;
	    }
	}
	
	return 0;
}