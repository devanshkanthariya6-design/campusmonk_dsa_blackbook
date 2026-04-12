//prime factorization of a number
// approach 1 - find factors and check which are prime
//approach 2- find prime till that no. and check which divides number
// O(sqrt n * 2*sqrt n)
/*vector<int> primefactor(int n){
    vector<int>fac;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            if(isprime(i))fac.push_back(i);
            if(i*i!=n && isprime(n/i))fac.push_back(n/i);
        }
    }
    return fac;
}
*/
//approach 3- optimised O(n) for large prime numbers
/*vector<int> primefactor(int n){
    vector<int>fac;
    for(int i=2;i<=n;i++){
        if(n%i==0){
            while(n%i==0){
                fac.push_back(i);
                n=n/i;
            }
        }
    }
    return fac;
}*/
//most optimised - O(sqrt n*logn)
#include<bits/stdc++.h>
using namespace std;
vector<int> primefactor(int n){
    vector<int>fac;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            while(n%i==0){
                fac.push_back(i);
                n=n/i;
            }
        }
    }
    if(n!=1)fac.push_back(n);
    return fac;
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
    int n=v.size();
    vector<vector<int>> ans;
    for(int i=0;i<n;i++){
        vector<int>factor=primefactor(v[i]);
        ans.push_back(factor);
    }
    for(int i=0;i<n;i++){
        for(auto j:ans[i]){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}