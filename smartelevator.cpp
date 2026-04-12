#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int currfloor=0;
    int time=0;
    for(int i=0;i<n;i++){
        int req;
        cin>>req;
        time+=(2*(abs(currfloor-req))+1);
        currfloor=req;
    }
    cout<<time;
}