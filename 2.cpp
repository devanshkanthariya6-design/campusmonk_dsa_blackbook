//count all odd digits of a number

#include<iostream>
using namespace std;
int countodddigit(int n){
    if(n==0)return 0;
    int cnt = 0;
    while(n!=0){
        int digit = n%10;
        if(digit%2 != 0)cnt++;
        n=n/10;
    }
    return cnt;
}
int main(){
    int n;
    cin>>n;
    cout<<countodddigit(n);
}