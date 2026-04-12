// check palindrome

#include<iostream>
using namespace std;
bool checkpalindrome(int n ){
    int temp=n;
    int num = 0;
    while(n!=0){
        int digit = n%10;
        num=num*10 + digit;
        n=n/10;
    }
    return temp==num;
}
int main(){
    int n ;
    cin>>n;
    if(checkpalindrome(n)==1)cout<<"true";
    else cout<<"false";
}