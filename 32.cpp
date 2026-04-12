// UNION OF TWO SORTED ARRAYS
/*vector<int> findUnion(vector<int> &a, vector<int> &b) {
        vector<int> uni;
        int n1=a.size();
        int n2=b.size();
        int l=0;
        int r=0;
        while(l<n1 && r<n2){
          if(a[l]==b[r]){
              if(uni.size()==0 || a[l]!=uni[uni.size()-1])uni.push_back(a[l]);
              l++;
              r++;
          }  
          else if(a[l]<b[r]){
              if(uni.size()==0 || a[l]!=uni[uni.size()-1])uni.push_back(a[l]);
              l++;
          }
          else{
              if(uni.size()==0 || b[r]!=uni[uni.size()-1])uni.push_back(b[r]);
              r++;
          }
        }
        while(l<n1){
            if(uni.size()==0 || a[l]!=uni[uni.size()-1])uni.push_back(a[l]);
            l++;
        }
        while(r<n2){
            if(uni.size()==0 || b[r]!=uni[uni.size()-1])uni.push_back(b[r]);
            r++;
        }
        return uni;
    }*/