//number of substring containing all three characters
//O(2N)
/*int countSubstring(string s) {
        unordered_map<char,int>mp;
        int n=s.size();
        int l=0;
        int r=0;
        int cnt=0;
        while(r<n){
            mp[s[r]]++;
            while(mp.size()==3){
                cnt+=n-r;
                mp[s[l]]--;
                if(mp[s[l]]==0)mp.erase(s[l]);
                l++;
            }
            r++;
        }
        return cnt;
    }*/
//O(N)
/*int countSubstring(string s) {
        vector<int>lastseen(3,-1);
        int cnt=0;
        for(int i=0;i<s.size();i++){
            lastseen[s[i]-'a']=i;
            if(lastseen[0]!=-1 && lastseen[1]!=-1 && lastseen[2]!=-1 ){
            cnt=cnt+1+min(lastseen[0],min(lastseen[1],lastseen[2]));
            }
        }
        return cnt;
    }*/