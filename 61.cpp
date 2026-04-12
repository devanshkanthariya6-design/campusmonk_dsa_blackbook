//LONGEST SUBSTRING WITHOUT REPEATING CHARACTER

// naive approach - O(N^2) - substring starting from every index(maintain hash array of 26)

//TC-O(N)  SC-O(N)(O(1) if we use hash instead)

#include <bits/stdc++.h>
using namespace std;
int main() {
	string s="abcdefeabcds";
	unordered_map<char,int>mp;
	int l=0;
	int r=0;
	int maxlen=0;
	while(r<s.size()){
	    while(mp.find(s[r])!=mp.end()){
	        mp[s[l]]--;
	        if(mp[s[l]]==0)mp.erase(s[l]);
	        l++;
	    }
	    maxlen=max(maxlen,r-l+1);
	    mp[s[r++]]+=1;
	}
	cout<<maxlen;
}
//OTHER APPROACH - sliding window O(N) O(1)
#include <bits/stdc++.h>
using namespace std;

int main() {
	string s="abcdefeabcds";
	int arr[26]={0};
	int l=0;
	int r=0;
	int maxlen=0;
	while(r<s.size()){
	    while(arr[s[r]-'a']!=0){
	        arr[s[l]-'a']--;
	        l++;
	    }
	    maxlen=max(maxlen,r-l+1);
	    arr[s[r++]-'a']+=1;
	}
	cout<<maxlen;
}