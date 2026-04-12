//rotate array by k

// APPROACH 1 - TAKE EXTRA VECTOR 
/*void rotateclockwise(vector<int>& arr, int k) {
        // code here
       int n = arr.size();
       vector<int>temp(n);
       for(int i=0;i<n;i++){
           temp[(i+k)%n]=arr[i];
       }
       arr=temp;
    } */

// APPROACH -2 do rotation by one k times    

// expected approach - O(1) extra space   REVERSE N-K ELEMENTS AS WELL AS LAST K ELEMENTS THEN REVERSE WHOLE ARRAY
/* void reversearray(vector<int>&arr,int l,int r){
      while(l<r){
          swap(arr[l++],arr[r--]);
      }
  }
    void rotateclockwise(vector<int>& arr, int k) {
       int n = arr.size();
       k=k%n;//IMPORTANT
       reversearray(arr,n-k,n-1);
       reversearray(arr,0,n-k-1);
       reversearray(arr,0,n-1);
    }*/