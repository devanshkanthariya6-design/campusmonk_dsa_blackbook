//check if the array is sorted
#include<bits/stdc++.h>
using namespace std;
bool issorted(vector<int> v){
    for(int i=1;i<v.size();i++){
        if(v[i]<v[i-1])return false;
    }
    return true;
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
    if(issorted(v))cout<<"true";
    else cout<<"false";
}