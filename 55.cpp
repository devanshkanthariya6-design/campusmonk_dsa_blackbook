//largest odd number in a string
//O(2N)
/*string largestOddNumber(string num) {
        int n = num.size() ;
        int i;
        for(i=n-1;i>=0;i--){
            int N = int(num[i]);//stoi takes string only not character
            if(N%2){
                break;
            }
        }
        string ans="";
        for(int j=0;j<=i;j++){
            ans+=num[j];
        }
        return ans;
    }*/
//O(N)
/*string largestOddNumber(string num) {
        int n = num.size() ;
        int i;
        for(i=n-1;i>=0;i--){
            int N = int(num[i]);//stoi takes string only not character
            if(N%2){
                break;
            }
        }
        string ans=num.substr(0,i+1);//.substr(INDEX,LENGTH)
        
        return ans;
    }*/   
 #include <bits/stdc++.h>
using namespace std;
string maxodd(string s){
    int n = s.size();
    int nonzeroidx=-1;
    bool zeroidx=false;
    int lastodd=-1;
    bool odd=false;
    for(int i=0;i<s.size();i++){
        if(zeroidx==false && s[i]!='0'){
            nonzeroidx=i;
            zeroidx=true;
             if(odd==true)break;
        }
        if(odd==false && (s[n-i-1]%2)!=0){
            lastodd=n-i-1;
            odd=true;
            if(zeroidx==true)break;
        }
    }
    return s=s.substr(nonzeroidx,lastodd-nonzeroidx+1);
}
int main() {
	// your code goes here
	string s="000238678894670";
	cout<<maxodd(s);
}  