// find divisor of a number
// brute force - check for 1 to n
/*
#include<iostream>
#include<vector>
using namespace std;
vector<int> finddivisor(int n){
    vector<int>temp;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            temp.push_back(i);
        }
    }
        return temp;
}
int main(){
    int n ;
    cin>>n;
    vector<int>div=finddivisor(n);
    cout<<"[";
    for(int i=0;i<div.size();i++){
    cout<<div[i];
    if(i!=div.size()-1)cout<<",";
    }
    cout<<"]";
    
}*/
//optimised - If i divides n, then (n / i) also divides n. We only need to check till √n.
#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;
vector<int> finddiv(int n){
    vector<int>temp;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0)temp.push_back(i);
        if(i*i!=n)temp.push_back(n/i);
    }
    sort(temp.begin(),temp.end());
    return temp;
}
int main(){
    int n;
    cin>>n;
    vector<int> div = finddiv(n);
    cout<<"[";
   for(int i=0;i<div.size();i++){
    cout<<div[i];
    if(i!=div.size()-1)cout<<",";
   }
    cout<<"]";
}