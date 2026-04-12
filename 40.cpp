// 3 sum

//brute force- o(N^3) run three loop and check if sum is 0

//APPROACH -1 TC-O(N^2)  SC-O(N)
/* bool hasTripletSum(vector<int>& arr, int target) {
    int n = arr.size();
    // Fix the first element as arr[i] 
    for (int i = 0; i < n - 2; i++) {
        // Hash set to store potential second elements
        unordered_set<int> st;
        // Fix the third element as arr[j]
        for(int j = i + 1; j < n; j++) {
            int second = target - arr[i] - arr[j];
            // Search for second element in hash set
        	if(st.find(second) != st.end()) {
            	return true;
            }
            // Add arr[j] as a potential second element
            st.insert(arr[j]);
        }
    } 

    return false; 
}*/

//APPROACH 2 - TWO POINTER TC-O(N^2)  SC-O(1)
/* bool hasTripletSum(vector<int>& arr, int target) {
    int n = arr.size();
    sort(arr.begin(), arr.end());
    // Fix the first element as arr[i] 
    for (int i = 0; i < n - 2; i++) {
        // Initialize left and right pointers with 
        // start and end of remaining subarray
        int l = i + 1, r = n - 1;
        int requiredSum = target - arr[i];
        while(l < r) {
            if(arr[l] + arr[r] == requiredSum)
                return true;
            if(arr[l] + arr[r] < requiredSum)
                l++;
            else if(arr[l] + arr[r] > requiredSum)
                r--;
        }
    } 

    return false; 
}*/    