#include <bits/stdc++.h>
using namespace std;
class comp{
    public:
    bool operator()(pair<pair<int,int>,int>p1,pair<pair<int,int>,int>p2){
        if(p1.first.second<p2.first.second)return true;
        if(p1.first.second>p2.first.second)return false;
        if(p1.second<p2.second)return true;
        else return false; 
    }
};
int main() {
	// your code goes here
	int n;
	cin>>n;

	vector<int>v(n);
	for(int i=0;i<n;i++){
	    cin>>v[i];
	}

	int key=-1;
	cin>>key;
	int keyidx;
	for(int i=0;i<n;i++){
	    if(v[i]==key){
	        keyidx=i;
	        break;
	    }
	}

	unordered_map<int,int>mp;
	for(auto it:v)mp[it]++;

	vector<pair<pair<int,int>,int>>freq;

	for(int i=0;i<n;i++){
	    if(mp.find(v[i])!=mp.end()){
	        freq.push_back({{v[i],mp[v[i]]},i});
	        mp.erase(v[i]);
	    }
	}

	sort(freq.begin(),freq.end(),comp());
	
	for(auto it:freq){
	    while(it.first.second--)cout<<it.first.first<<" ";
	}cout<<endl;
	cout<<keyidx;
}
