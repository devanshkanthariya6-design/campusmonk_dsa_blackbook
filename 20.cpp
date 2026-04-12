//reverse an array

#include<bits/stdc++.h>
using namespace std;
void reversearray(vector<int> &v){
    int i=0;
    int j=v.size()-1;
    while(i<j){
        swap(v[i++],v[j--]);
    }
    
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
    while(getline(ss,token,' ')){
        int num=stoi(token);
        v.push_back(num);
    }
    reversearray(v);
    for(auto i:v)cout<<i<<" ";
}