#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int prod=1;
	while(n){
	    int rem=n%10;
	    prod*=rem;
	    n=n/10;
	}
	cout<<prod;
}