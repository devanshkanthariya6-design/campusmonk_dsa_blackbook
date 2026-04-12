//longest common prefix
/*string longestCommonPrefix(vector<string> arr) {
        // your code here
        string s=arr[0];
        for(int i=1;i<arr.size();i++){
            string temp = arr[i];
            int j=0;
            while(j<s.size() && j<temp.size()){
                if(s[j]==temp[j])j++;
                else break;
            }
            s=s.substr(0,j);
            if(s.size()==0)break;
        }
        return s;
    }*/

// 2nd approach - sort the vector and compare first and last string 