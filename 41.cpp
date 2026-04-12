//sort 0s and 1s
// TC-O(N)  SC-O(1)  TWO POINTERS APPROACH
/* void segregate0and1(vector<int> &arr) {
        // code here
        int i=0;
        int j=arr.size()-1;
        while(i<j){
            if(arr[i]==0)i++;
            if(arr[j]==1)j--;
            if(arr[i]==1 && arr[j]==0 && i<j)swap(arr[i++],arr[j--]);
        }
    }*/
//sort 0s and 1s and 2S   
/*void sort012(vector<int>& arr) {
        // code here
        int i=0;
        int j=0;
        int k=arr.size()-1;
        while(j<=k){
            if(arr[j]==0){
                swap(arr[i++],arr[j++]);
            }
            else if(arr[j]==1)j++;
            else{
                swap(arr[j],arr[k--]);
            }
        }
    }*/