// LCM

#include<bits/stdc++.h>
using namespace std;

int lcm(int a,int b){
   if(a>b){
    for(int i=a;;i+=a){
        if(i%a==0 && i%b==0)return i;
    }
   }
   else for(int i=b;;i+=b){
        if(i%a==0 && i%b==0)return i;
    }
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<lcm(a,b);
}