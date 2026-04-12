#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int evencnt=0;
    int sum=0;
    int hash[10]={0};
    bool locked=0;
    for(int i=1;i<=4;i++){
        int digit=n%10;
        if(hash[digit]==1){
            locked=1;
            break;
        }
        hash[digit]=1;
        if(digit%2==0)evencnt++;
        sum+=digit;
        n=n/10;
    }
    if(locked==0 && sum%3==0 && evencnt==2)cout<<"OPEN";
    else cout<<"LOCKED";
}