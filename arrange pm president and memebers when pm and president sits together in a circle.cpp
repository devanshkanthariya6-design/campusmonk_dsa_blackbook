#include <bits/stdc++.h>
using namespace std;
int fact(int n){
   int f=1;
   for(int i=1;i<=n;i++){
       f*=i;
   }
   return f;
}
int main() {
	// your code goes here
	int n;
	cin>>n;
	cout<<2*fact(n-1);
}