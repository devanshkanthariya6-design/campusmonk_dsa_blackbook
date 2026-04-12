//longest consecutive sequence in an array

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int maxconsecutive(vector<int>&a){
    sort(a.begin(),a.end());
    int maxcnt=1;
    int currcnt=1;
    for(int i=1;i<a.size();i++){
        if(a[i]-1==a[i-1])currcnt++;
        else currcnt=1;
        maxcnt=max(maxcnt,currcnt);
    }
    return maxcnt;
}
int main() {
    vector<int>a={2,4,7,10,5,20,39,1,3,21,38,37,22,35,36,34};
    cout<<maxconsecutive(a);
}

//approach 2  using hashing 
#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int>v={1,3,4,5,6,7,0,9,8};
	unordered_set<int> s;
	int res=0;
	for(auto it:v)s.insert(it);
	for(int i=0;i<v.size();i++){
	    if(s.find(v[i])!=s.end() && s.find(v[i]-1)==s.end()){
	        int curr=v[i];
	        int cnt=0;
	        while(s.find(curr)!=s.end()){
	            s.erase(curr);//avoid recalculation
	            cnt++;
	            curr++;
	        }
	        res=max(res,cnt);
	    }
	}
	cout<<res;
	
}