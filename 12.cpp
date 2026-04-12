// GCD
//brute force - find divisors of both and then find largest
/*#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int findgcd(int n1,int n2){
    vector<int>v1;
    vector<int>v2;
    for(int i=1;i*i<=n1;i++){
        if(n1%i==0){
            v1.push_back(i);
            if(i*i!=n1)v1.push_back(n1/i);
        }
    }
    for(int j=1;j*j<=n2;j++){
         if(n2%j==0){
            v2.push_back(j);
            if(j*j!=n2)v2.push_back(n2/j);
        }
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    int l=0;
    int r=0;
    int gcd;
    while(l<v1.size() && r<v2.size()){
        if(v1[l]==v2[r]){
            gcd=v1[l];
            l++;
            r++;
        }
        else if(v1[l]<v2[r] && l<v1.size()){
            l++;
        }
        else if(v1[l]>v2[r] && r<v2.size())r++;
    }
    return gcd;
}
int main(){
    int n1;
    cin>>n1;
    int n2;
    cin>>n2;
    cout<<findgcd(n1,n2);
}*/

//2nd approach - loop from 1 to smaller number and if it divides both update gcd(reverse for better complexity)

// optimised - euclidean algorithm - >  gcd(a,b)=gcd(a-b,b) or  gcd(a,b)=gcd(a%b,b) where a>b  {when on becomes 0 other is gcd} TC-O(log(min(a,b)))
int gcd(int a,int b){
    while(a>0 && b>0){
        if(a>b)a=a%b;
        else b=b%a;
    }
    if(a==0)return b;
    else return a;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n1,n2;
    cin>>n1>>n2;
    cout<<gcd(n1,n2);
}
