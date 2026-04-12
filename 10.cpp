//prime or not

// brute force - check for every number from 2 to n whether it is divisible
/*#include<iostream>
using namespace std;
bool isprime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0)return false;
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    if(isprime(n))cout<<"true";
    else cout<<"false";
}*/

// better - prime no = only 2 divisor (0,1)

/*#include<iostream>
#include<vector>
using namespace std;
bool isprime(int n){
    if(n==1)return false;
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
int main(){
    int n;
    cin>>n;
    if(isprime(n))cout<<"true";
    else cout<<"false";
}*/

// 3rd approach- we will check for numbers untill root n because THE SMALLEST FACTOR OF A NUMBER OTHER THAN 1 IS NOT MORE THAN SQUARE ROOT OF THAT NUMBER
#include<iostream>
using namespace std;
bool isprime(int n){
    if(n==1)return 0;
    for(int i=2;i*i<=n;i++){
        if(n%i==0)return 0;
    }
    return 1;
}
int main(){
    int n;
    cin>>n;
    if(isprime(n))cout<<"true";
    else cout<<"false";
}