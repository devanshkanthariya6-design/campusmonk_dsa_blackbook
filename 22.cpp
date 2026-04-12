//second highest occuring element
#include<bits/stdc++.h>
using namespace std;
int maxfreqelement(vector<int>& arr) {
        unordered_map<int,int> mp;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        int maxi=0;
        for(auto it:mp){
            if(it.second>maxi){
                maxi=it.second;
            }
        }
        int secmax=-1;
        for(auto it:mp){
            if(it.second<maxi){
                secmax=max(secmax,it.second);
            }
        }
        if(secmax==-1)return -1;
        int ans=-1;
        for(auto it:mp){
           if(it.second==secmax){
            if(ans==-1 || it.first<ans)ans=it.first;
           }
        }
        return ans;
    }
int main(){
    string s;
    getline(cin,s);
    vector<int> v;
    if(s.front()=='[' && s.back()==']'){
        s=s.substr(1,s.length()-2);
    }
    stringstream ss(s);
    string token;
    while(getline(ss,token,',')){
        int num=stoi(token);
        v.push_back(num);
    }
    cout<<maxfreqelement(v);
}