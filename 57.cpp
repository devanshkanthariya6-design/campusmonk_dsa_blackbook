//ISOMORPHIC STRINGS

#include <bits/stdc++.h>
using namespace std;

int main() {
    
	string s1="egg";
	string s2="add";
	
	if(s1.size()!=s2.size()){
	    cout<<"false";
	    return 0;
	}
	
	vector<int>v1(26,-1);
	vector<int>v2(26,-1);
	
	for(int i=0;i<s1.size();i++){
	    if((v1[s1[i]-'a']!=-1 && v1[s1[i]-'a']!=s2[i])  || 
	      (v2[s2[i]-'a']!=-1 && v2[s2[i]-'a']!=s1[i])){
	          
	        cout<<"false";
	        return 0;
	    }
	    
	    v1[s1[i]-'a']=s2[i];
	    v2[s2[i]-'a']=s1[i];
	    
	}
	
	cout<<"true";
	return 0;
}

// alphabets are replaced and jumbled    
#include <bits/stdc++.h>
using namespace std;

int main() {
	string s1="egg";
	string s2="add";
	if(s1.size()!=s2.size()){
	    cout<<"false";
	    return 0;
	}
	vector<int>v1(26,0);
	vector<int>v2(26,0);
	
	for(int i=0;i<s1.size();i++){
	    v1[s1[i]-'a']+=1;
	    v2[s2[i]-'a']+=1;
	}
	sort(v1.begin(),v1.end());
	sort(v2.begin(),v2.end());
	for(int i=0;i<26;i++){
	    if(v1[i]!=v2[i]){
	        cout<<"false";
	        return 0;
	    }
	}
	cout<<"true";
	return 0;
}