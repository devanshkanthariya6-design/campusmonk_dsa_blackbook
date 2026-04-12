// REARRANGE ARRAY ELEMENTS BY SIGN
// approach 1 - Using rotation in array - O(n^2) Time and O(1) Space
/*vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();  
        vector<int>sign(n);
        int posindex=0;
        int negindex=1;
        for(int i=0;i<n;i++){
            if(nums[i]>0 && posindex<n){
                sign[posindex]=nums[i];
                posindex+=2;
            }
            else if(nums[i]<0 && negindex<n){
                sign[negindex]=nums[i];
                negindex+=2;
            }
        }
        return sign;
    }*/
//   approach 2 - Using two pointers - O(n) Time and O(n) Space
    /*int n = v1.size();
    vector<int>v2;
    int posidx=0;
    int negidx=0;
    while(posidx<n && negidx<n){
        while(v1[posidx]<0)posidx++;
        while(v1[negidx]>0)negidx++;
        v2.push_back(v1[posidx++]);
        v2.push_back(v1[negidx++]);
        
    }
    }*/