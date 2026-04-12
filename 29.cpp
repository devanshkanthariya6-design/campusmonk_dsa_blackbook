// MOVE ZEROES TO END
/*  int i=0;
    int j=1;
    while(j<v.size()){
        if(v[i]==0 && v[j]!=0)swap(v[i++],v[j++]);
        else if(v[i]==0 && v[j]==0)j++;;
    }
    for(auto it:v)cout<<it<<" ";
    }*/



   /*int pos=0;
    int cnt=0;
    for(int i=0;i<=v.size();i++){
        if(v[i]!=0)v[pos++]=v[i];
        else cnt++;
    }
    for(int i=v.size()-1;i>v.size()-cnt;i--)v[i]=0;
    for(auto it:v){
        cout<<it<<" ";
    }*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	vector<int>v={0,1,4,0,5,2};
	int idx=0;
	for(int i=0;i<v.size();i++){
	    if(v[i]!=0){
	        v[idx]=v[i];
	        idx++;
	    }
	}
	while(idx<v.size()){
	    v[idx++]=0;
	}
	for(auto it:v){
	    cout<<it<<" ";
	}
}   