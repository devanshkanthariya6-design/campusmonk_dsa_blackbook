//VALID ANAGRAM

//BRUTE FORCE - SORT STRINGS AND COMPARE (!!!!!!!!!!!!!!!!!YES WE CAN SORT STRINGS{CHARACTER ARRAY} WITH ITS ASCII VALUES JUST LIKE NUM ARRAY)
/*bool isAnagram(string s, string t) {
        if(s.size()!=t.size())return false;
        vector<int>v1(26,0);
        vector<int>v2(26,0);
        for(int i=0;i<s.size();i++){
            v1[s[i]-'a']+=1;
            v2[t[i]-'a']+=1;
        }
        for(int i=0;i<26;i++){
            if(v1[i]!=v2[i])return false;
        }
        return true;
    }*/