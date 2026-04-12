#include <bits/stdc++.h>
using namespace std;
int countfine(int n , vector<int> v , int d , int x){
    int fine=0;
    for(int i=0;i<n;i++){
        if((d%2==0 && v[i]%2!=0 )|| (d%2!=0 && v[i]%2==0) )fine+=x;
    }
    return fine;
}
int main() {
	// your code goes here
	int n;
	cin>>n;
	cin.ignore();///////////////////////////////////////////////////////////////
	vector<int>v;
	string s;
	getline(cin,s);
	if(s.front()=='{' && s.back()=='}'){
	    s=s.substr(1,s.length()-2);
	}
	stringstream ss(s);
	string token;
	while(getline(ss,token,',')){
	    int num=stoi(token);
	    v.push_back(num);
	}
	int d;
	cin>>d;
	int x;
	cin>>x;
	cout<<countfine(n,v,d,x);
}