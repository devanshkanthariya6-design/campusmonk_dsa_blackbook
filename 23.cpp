// linear search 
#include<bits/stdc++.h>
using namespace std;
int linearsearch(vector<int>arr ,int x){
    int idx=-1;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==x){
            idx=i;
            break;
        }
    }
    return idx;
}
int main(){
    int x;
    cin>>x;
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
    cout<<linearsearch(v,x);
}