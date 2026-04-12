#include<bits/stdc++.h>
using namespace std;
void sort012(vector<int>&v){
    int i=0;
    int j=0;
    int k=v.size()-1;
    while(j<=k){
        if(v[j]==0){
            swap(v[i++],v[j++]);
        }
        else if(v[j]==1){
            j++;
        }
        else if(v[j]==2){
            swap(v[j],v[k--]);
        }
    }
}
int main(){
    vector<int>v;
    string s;
    getline(cin,s);
    if(s.front()=='[' && s.back()==']'){
        s=s.substr(1,s.length()-2);
    }
    stringstream ss(s);
    string token;
    while(getline(ss,token,',')){
        int num=stoi(token);
        v.push_back(num);
    }
    sort012(v);
    for(int i=0;i<v.size();i++){
        if(i!=v.size()-1)cout<<v[i]<<",";
        else cout<<v[i];
    }
}