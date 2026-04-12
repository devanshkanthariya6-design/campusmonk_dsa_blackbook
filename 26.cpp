// max consecutive ones

 /*int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxfreq=0;
        int currfreq=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                currfreq+=1;
                maxfreq=max(maxfreq,currfreq);
            }
            else currfreq=0;
        }
        return maxfreq;
    }*/

    // NOTE - WE CAN USE XOR(XOR OF SAME NO GIVES 0) IF WE JUST NEED MAX CONSECUTIVE SEQUENCE (O OR 1 DOESNT MATTER)