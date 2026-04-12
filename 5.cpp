// largest digit in a number0 

#include<iostream>
using namespace std;
int largestdigit(int n){
    int num=n%10;
    n=n/10;
    while(n!=0){
        int digit = n%10;
        if(digit>num)num=digit;
        n=n/10;
    }
    return num;
}
int main(){
    int n ;
    cin>>n;
    cout<<largestdigit(n);
}