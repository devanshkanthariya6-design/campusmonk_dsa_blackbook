//rotate string 
//O(N^2)
/* bool rotateString(string s, string goal) {
        for(int i=0;i<s.size();i++){
            char temp=s[0];
            for(int j=1;j<s.size();j++){
                s[j-1]=s[j];
            }
            s[s.size()-1]=temp;
            if(s==goal)return true;
        }
        return false;
    }*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    
	string s1="devansh";
	string s2="anshdev";
	
	if(s1.size()!=s2.size()){
	    cout<<"false";
	    return 0;
	}
	
	string s=s1+s1;
	for(int i=0;i<s1.size();i++){
	    string str = s.substr(i,s1.length());
	    if(str==s2){
	        cout<<"true";
	        return 0;
	    }
	}
	cout<<"false";
	return 0;
}    
//better approach-> TC O(N) SC-O(N)
/*bool rotateString(string s, string goal) {
        string S=s;
        S.append(S);//if u concatenate s tring with itself then it contains all rotaions of original string
        return (s.size()==goal.size() && S.find(goal)!=string::npos)? true : false;//find(substring,pos)//string::npos
    }*/