// missing number in an array 
//APPROACH -1 o(NLOGN)
/* int missingNum(vector<int>& arr) {
        int n = arr.size()+1;
        sort(arr.begin(),arr.end());
        for(int i=0;i<n-1;i++){
            if(arr[i]!=i+1){
                return i+1;
            }
        }
        return n;
    }*/

    // APPROACH 2 - O(N) O(N)  maintain a visited array....traverse array and mark true to index which is present....and then traverse visited to know missing numnber
    //APPROACH 3 - [Naive Approach] Linear Search for Missing Number - O(n^2) Time and O(1) Space{1 TO N LOOP AND THEN LINEAR SEARCH}
//APPROACH 4- [Expected Approach 1] Using Sum of n terms Formula - O(n) Time and O(1) Space
//APPROACH 5- [Expected Approach 2] Using XOR Operation - O(n) Time and O(1) Space