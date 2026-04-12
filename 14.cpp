// print all  primes till N

#include<bits/stdc++.h>
using namespace std;
void printprime(int n){
    vector<bool> prime(n+1,true);
    for(int i=2;i*i<=n;i++){
        if(prime[i]){
            for(int j=i*i;j<=n;j+=i){
                prime[j]=false;
            }
        }
    }
    for(int i=2;i<=n;i++){
        if(prime[i])cout<<i<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    printprime(n);
}