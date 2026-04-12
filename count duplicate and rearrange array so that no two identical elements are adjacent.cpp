#include<bits/stdc++.h>
using namespace std;

int main(){

string num;
cin>>num;
//valid integer check
for(auto i:num){
    if(!isdigit(i)){
        cout<<"Invalid Input";
        return 0;
    }
}

int n=stoi(num);
vector<int>v;

cin.ignore(numeric_limits<streamsize>::max(),'\n');

int val;
while(cin>>val)v.push_back(val);

if(v.size()!=n){
    cout<<"Invalid Input";
    return 0;
}

unordered_map<int,int>mp;
for(auto it:v){
    mp[it]++;
    if(mp[it]>(n+1)/2){//impossible case check
        cout<<"Invalid Input";
        return 0;
    }
}

priority_queue<pair<int,int>>pq;
for(auto it:mp)pq.push({it.second,it.first});
vector<int>ans;
//greedy approach - always printing highest frequency element first
while(!pq.empty()){
    auto top1=pq.top();
    pq.pop();
    ans.push_back(top1.second);
    top1.first--;
    if(!pq.empty()){
        auto top2=pq.top();
        pq.pop();
        ans.push_back(top2.second);
        top2.first--;
        if(top2.first!=0)pq.push(top2);
    }
    if(top1.first!=0)pq.push(top1);
}

for(auto it:ans)cout<<it<<" ";
return 0;
}

