//LONGEST SUBSTRING WITH ATMOST K DISTINCT CHARACTERS
#include<bits/stdc++.h>
using namespace std;
//naive-O(N^2)  explore substring starting from every index(break when unique charcater count exceed k)
//SLIDING WINDOW - TC-O(N)+O(N)+O(LOG256)  SC-O(256)
int distinctchar(string s,int k){
    unordered_map<char,int>mp;
    int l=0;
    int r=0;
    int res=0;
    while(r<s.size()){
        mp[s[r]]++;
        while(mp.size()>k){
            mp[s[l]]--;
            if(mp[s[l]]==0)mp.erase(s[l]);
            l++;
        }
        res=max(res,r-l+1);
        r++;
    }
    return res;
}
//SLIDING WINDOW - TC-O(N)+O(LOG256)  SC-O(256)
int distinctchar(string s,int k){
    unordered_map<char,int>mp;
    int l=0;
    int r=0;
    int res=0;
    while(r<s.size()){
        mp[s[r]]++;
        if(mp.size()>k){
            mp[s[l]]--;
            if(mp[s[l]]==0)mp.erase(s[l]);
            l++;
        }
        res=max(res,r-l+1);
        r++;
    }
    return res;
}
int main(){
    int k;
    cin>>k;
    cin.ignore();
    string s;
    getline(cin,s);
    cout<<distinctchar(s,k);
}