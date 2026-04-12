#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	vector<int>v(n);
	for(int i=0;i<n;i++){
	    cin>>v[i];
	}
	int i=0;
	int j=2;
	int overload=0;
	while(j<n){
	    if(v[i]<v[i+1] && v[i+1]<v[j])overload++;
	    i++;
	    j++;
	}
	cout<<overload;
}
