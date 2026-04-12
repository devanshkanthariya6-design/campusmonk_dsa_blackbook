//count all digits of a number

#include<iostream>
using namespace std;
int countdigit(int n){
    if(n==0)return 1;
    int cnt = 0;
    while(n!=0){
        n=n/10;
        cnt++;
    }
    return cnt;
}
int main(){
    int n;
    cin>>n;
    cout<<countdigit(n);
}