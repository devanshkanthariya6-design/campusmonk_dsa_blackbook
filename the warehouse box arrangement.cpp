#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    if(v.size()%2!=0){
        cout<<"-1";
        return 0;
    }
    sort(v.begin(),v.end());
    int requiredweight=v[0]+v[n-1];
    for(int i=1;i<n/2;i++){
        int currweight=v[i]+v[n-i-1];
        if(currweight!=requiredweight){
            cout<<"-1";
            return 0;
        } 
    }
    cout<<n/2;
}