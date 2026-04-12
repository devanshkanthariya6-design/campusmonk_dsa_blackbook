#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	getline(cin,s);
	string ans="";
	for(int i=0;i<s.length();i++){
	    char c=s[i];
	    if(isdigit(c)){
	        int n=c-'0';
	        ans.append(n,s[i+1]);
	        i++;
	    }
	    else{
            ans.append(1,c);
	    }
	}
	cout<<ans;
}