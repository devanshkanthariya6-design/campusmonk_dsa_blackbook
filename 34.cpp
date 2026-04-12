//leaders in an array
/*vector<int> leaders(vector<int>& arr) {
        // code here
       vector<int>leader;
       int maxi=arr[arr.size()-1];
       leader.push_back(maxi);
       for(int i=arr.size()-2;i>=0;i--){
           if(arr[i]>=maxi){
               maxi=arr[i];
               leader.insert(leader.begin(),maxi);// PUSH FRONT IS NO THERE IN CPP VECTOR          }
       }
       return leader;
    }*/