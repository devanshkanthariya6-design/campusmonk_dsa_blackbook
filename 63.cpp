//MINIMUM WINDOW SUBSTRING
#include <bits/stdc++.h>
using namespace std;

int main() {
	string s="cabwefgewcwaefgcf";
	int n=s.size();
	string t="cae";
	int m=t.size();
	unordered_map<char,int>mp;
	for(auto c:t)mp[c]++;
	int l=0;
	int r=0;
	int startidx=-1;
	int minlen=-1;
	int cnt=0;
	while(r<n){
	    mp[s[r]]--;
	    if(mp[s[r]]>=0)cnt++;
	    while(cnt==m){
	        if(minlen==-1 || r-l+1<minlen){
	            minlen=r-l+1;
	            startidx=l;
	        }
	        mp[s[l]]++;
	        if(mp[s[l]]>0)cnt--;
	        l++;
	    }
	    r++;
	}
	cout<<s.substr(startidx,minlen);
}