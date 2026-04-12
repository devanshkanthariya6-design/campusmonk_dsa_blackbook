//reverse digit of a number

#include<iostream>
using namespace std;
int reversedigit(int n){
    int num = 0;
    while(n!=0){
        int digit = n%10;
        num=num*10 + digit;
        n=n/10;
    }
    return num;
}
int main(){
    int n;
    cin>>n;
    cout<<reversedigit(n);
}
// for maintaing order----------> num=digit*pow(10,i)+num