// count of odd numbers in array

#include<bits/stdc++.h>
using namespace std;
int oddcount(vector<int> v){
    int cnt=0;
    for(int i=0;i<v.size();i++){
        if(v[i]%2!=0)cnt++;
    }
    return cnt;
}
int main(){
    int n;
    cin>>n;
    cin.ignore();
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
    cout<<oddcount(v);
}