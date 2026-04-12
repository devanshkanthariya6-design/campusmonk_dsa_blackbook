//count of prime no. till N

//brute force - O(n*sqrt(n))
/*#include<iostream>
#include<vector>
using namespace std;
bool isprime(int n){
    vector<int>div;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            div.push_back(i);
            if(i*i!=n)div.push_back(n/i);
            if(div.size()>2)return false;
        }
    }
    return true;
}
int countprime(int n){
    int cnt=0;
    for(int i=2;i<=n ;i++){
        if(isprime(i))cnt++;
    }
    return cnt;
}
int main(){
    int n;
    cin>>n;
    cout<<countprime(n);
}*/
//optimised - sieve of eratostenes - O(n*log(logn))   repeatedly marking multiples of each prime as non-prime, starting from 2. This avoids redundant checks
#include<bits/stdc++.h>
using namespace std;
int countprime(int n){
    vector<bool> prime(n+1,true);
    for(int i=2;i*i<=n;i++){
        if(prime[i]){
            for(int j=i*i;j<=n;j+=i){
                prime[j]=false;
            }
        }
    }
    int cnt=0;
    for(int i=2;i<=n;i++){
        if(prime[i])cnt++;
    }
    return cnt;
}
int main(){
    int n;
    cin>>n;
    cout<<countprime(n);
}
// you have prime vector so we can calculate prime in any range