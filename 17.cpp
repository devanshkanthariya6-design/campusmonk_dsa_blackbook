// sum of array elements

#include<bits/stdc++.h>
using namespace std;
int sumofarray(vector<int> arr){
    int sum=0;
    for(int i=0;i<arr.size();i++){
        sum+=arr[i];
    }
    return sum;
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
    while(getline(ss,token,' ')){
        int num=stoi(token);
        v.push_back(num);
    }
    cout<<sumofarray(v);
}