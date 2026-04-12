#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int bin=0;
	for(int i=0;n>0;i++){
	    int digit=n&1;
	    bin+=digit*pow(10,i);
	    n=n>>1;
	}
	int dec=0;
    for(int i=0;bin>0;i++){
        if((bin&1)==0)dec+=(1<<i);
        bin=bin/10;
    }
    cout<<dec;
}