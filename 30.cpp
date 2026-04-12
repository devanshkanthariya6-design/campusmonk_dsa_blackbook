// remove duplicates from array
/*vector<int> removeDuplicates(vector<int> &nums) {
        // code here
         int n =nums.size();
         vector<int>ans;
         ans.push_back(nums[0]);
         for(int i=1;i<n;i++){
             if(nums[i]!=nums[i-1])ans.push_back(nums[i]);
         }
         return ans;
    }*/

// FOLLOW UP - inplace

/*int removeDuplicates(vector<int>& nums) {
        int n =nums.size();
        int i=0;
        int j=1;
        while(i<n && j<n){
            if(nums[j]<=nums[i]){
                while(j<n && nums[j]<=nums[i] )j++;
                if(j<n){
                i++;
                nums[i]=nums[j];
                j=i+1;
                }
                else break;
            }
            else {
                i++;
                j++;
            }
        }
        return i+1;
    }*/

    // optimized- O(n) and inplace
    /* int removeDuplicates(vector<int>& nums) {
        int index=1;//will put right element to each index
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=nums[i-1]){
                nums[index++]=nums[i];
            }
        }
        return index;
    }*/