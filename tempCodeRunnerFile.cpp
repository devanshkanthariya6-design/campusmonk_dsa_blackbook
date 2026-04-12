unordered_map<char,int>mp;
    int maxcnt=0;
    int cnt=0;
    for(int i=0;i<s.size();i++){
        if(mp.find(s[i])==mp.end()){
            cnt++;
        }
        else{
            cnt=i-mp[s[i]];
        }
        mp[s[i]]=i;
        maxcnt=max(maxcnt,cnt);
    }
    return maxcnt;