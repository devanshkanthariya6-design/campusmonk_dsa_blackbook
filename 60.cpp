//  Sort Characters By Frequency
/*
#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;
bool comp(pair<int,int>a,pair<int,int>b){
    if(a.first>b.first)return true;
    if(a.first<b.first)return false;
    if(a.second<b.second)return true;
    else return false;
}
int main() {
	string s="aree";
	vector<pair<int,int>>v(26,{0,0});
	for(auto c:s){
	    v[c-'a'].first+=1;
	    v[c-'a'].second=c-'a';
	}
	sort(v.begin(),v.end(),comp);
	for(auto p:v){
	    if(p.first>0)cout<<char(p.second+'a')<<" ";
	    else break;
	}
	return 0;
}
*/
/////better - USING PRIORITY QUEUE
#include<bits/stdc++.h>
using namespace std;
class comp{//for priority queue,comp works opposite
    public://most important line
    bool operator()(pair<int,char>p1,pair<int,char>p2){
        if(p1.first>p2.first)return false;
        if(p1.first<p2.first)return true;
        if(p1.second<p2.second)return false;
        return true;
    }
};
string frequencysort(string s){
    unordered_map<char,int>mp;
    for(auto i:s)mp[i]++;
    priority_queue<pair<int,char>,vector<pair<int,char>>,comp>pq;//comp must be class
    for(auto i:mp){
        pq.push({i.second,i.first});
    }
    string ans="";
    while(!pq.empty()){
        auto p=pq.top();
        pq.pop();
        ans.append(p.first,p.second);//when u want to append a '''''character'''''(not string) multiple times---> .append(num,c)
    }
    return ans;
}
int main(){
    string s;
    getline(cin,s);
    cout<<frequencysort(s);
}
