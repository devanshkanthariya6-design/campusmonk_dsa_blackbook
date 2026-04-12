// check for perfect number(sum of its proper divisor = original number)

#include<iostream>
using namespace std;
bool checkPerfectNumber(int n) {
        int sum=0;
        for(int i=1;i*i<=n;i++){
            if(n%i==0){
                if(i!=n)sum+=i;
                if(i*i!=n && (n/i)!=n)sum+=(n/i);
            }
        }
        return sum==n;
}
int main(){
    int n;
    cin>>n;
    if(checkPerfectNumber(n))cout<<"true";
    else cout<<"false";
}