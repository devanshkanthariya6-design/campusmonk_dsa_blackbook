//  rotate array by one to right
/*void rotate(vector<int> &arr) {
        int n = arr.size();
        int prev=arr[0];
        int curr;
        for(int i=1;i<=n;i++){
            curr=arr[i%n];
            arr[i%n]=prev;
            prev=curr;
        }
    } */

// second way
/*int temp = arr[n - 1];
    for (int i = n - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = temp;*/