// count primes in range L to R
#include<bits/stdc++.h>
using namespace std;
int countprime(int a,int b){
    vector<bool> prime(b+1,true);
    prime[0]=false;
    prime[1]=false;
    for(int i=2;i*i<=b;i++){
        if(prime[i]){
            for(int j=i*i;j<=b;j+=i){
                prime[j]=false;
            }
        }
    }
    int cnt=0;
    for(int i=a;i<=b;i++){
        if(prime[i])cnt++;
    }
    return cnt;
}
int main(){
    int n;
    cin>>n;
    vector<pair<int,int>> range;//dont initialise vector with size as it fills upto that size with random numbers
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        range.push_back({a,b});
    }
    // for(auto i:range){
    //     cout<<i.first<<" "<<i.second<<endl;
    // }
    vector<int>count(n,0);
    for(int i=0;i<n;i++){
        int a=range[i].first;
        int b=range[i].second;
        int cnt=countprime(a,b);
        count[i]=cnt;
    }
    cout<<"[";
    for(int i=0;i<count.size();i++){
        cout<<count[i];
        if(i!=count.size()-1)cout<<",";
    }
    cout<<"]";
}