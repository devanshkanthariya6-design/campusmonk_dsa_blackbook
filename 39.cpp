// two suM
//APPROACH 1 - O(N^2) - TRAVERSE ARRAY AND LOOK IF TARGET-ARR[i] EXIST IN UPCOMING ELEMENTS
//APPROACH 2 - O(2N) - TRAVERSE ARRAY AND SAVE FREQUENCY AND TRAVERSE ARRAY AND CHECK IF THERE IS FREQUENCY FOR TARGET-ARR[i]
/*bool twoSum(vector<int>& arr, int target) {
        // code here
        unordered_map<int,int>mp;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]=i;
        }
        for(int i=0;i<arr.size();i++){
            if(mp[target-arr[i]]>i){
                return true;
            }
        }
        return false;
    }*/
// JUST ONE LOOP?
/*vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mpp;
        for(int i=0;i<nums.size();i++){
            int compliment=target-nums[i];
            if(mpp.count(compliment)!=mpp.end()){/////////// important line to ponder as mp[something] creates entry (index 0)
                return true;
            }
            mpp[nums[i]]=i;
        }
        return false;
    }*/


//Sorting 3 - Sorting and Binary Search - O(n × log(n)) time and O(1) space
//APPROACH 4 - Sorting and Two-Pointer Technique - O(n × log(n)) time and O(1) space   
/* sort(arr.begin(), arr.end());
    int left = 0, right = arr.size() - 1;
    while (left < right){
        int sum = arr[left] + arr[right];
        if (sum == target)
            return true;
        else if (sum < target)
            left++; 
        else
            right--; 
    }
    // If no pair is found
    return false;*/    