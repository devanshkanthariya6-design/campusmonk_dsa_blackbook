//find repeating and missing number

//brute force - run loop from 1 to n and traverse for each number in array and check its frequency || TC-O(N^2)

//approach 1 - Using map - O(n) Time and O(n) Space

//TC-O(N^2) SC-O(N^2)
/*vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                mp[grid[i][j]]+=1;
            }
        }
        int a,b;
        for(int i=1;i<=n*n;i++){
            if(mp[i]==2)a=i;
            if(mp[i]==0)b=i;
        }
        return {a,b};
    }*/


// better approach - Making Two Math Equations - O(n) Time and O(1) Space

#include <iostream>
#include <vector>
using namespace std;
pair<int,int> fndmsng_n_rptng(vector<int>arr,int n){
    
    int sum=0;
    int sqrsum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        sqrsum+=(arr[i]*arr[i]);
    }
    int actualsum=n*(n+1)/2;
    int actualsqrsum=n*(n+1)*((2*n)+1)/6;
    int diff1=actualsum-sum;
    int diff2=actualsqrsum-sqrsum;
    int f=diff2/diff1;
    int missing=(diff1+f)/2;
    int repeating = f-missing;
    return {missing ,repeating};
}
int main() {
    
	vector<int>arr={3,5,4,1,2,5,7};
	int n=7;
	pair<int,int>res=fndmsng_n_rptng(arr,n);
	
	cout<<res.first<<" "<<res.second;
	
	return 0;
}

// USING XOR - O(n) Time and O(1) Space 

// Step by step approach:

// XOR all array elements and numbers from 1 to n to get XOR of missing and repeating numbers.
// Find the rightmost set bit in this XOR result using xorVal & ~(xorVal-1).
// Use this set bit to divide array elements and numbers 1 to n into two groups.
// XOR elements of first group to get x and second group to get y.
// Count occurrences of x in original array to determine which is missing and which is repeating.
// If x appears in array, x is repeating and y is missing; otherwise vice versa.
// Return both the repeating and missing numbers.


 #include <iostream>
#include <vector>
using namespace std;
pair<int,int> fndmsng_n_rptng(vector<int>arr,int n){
    
    int zor=0;
	
	for(int i=0;i<n;i++){
	    zor^=arr[i];
	    zor^=(i+1);
	}
	
	int bitcnt=0;
	while(1){
	    if(zor&(1<<bitcnt)!=0)break;
	    bitcnt++;
	}
	
	int zero=0;
	int one=0;
	
	for(int i=0;i<n;i++){
	    //array element
	    if((arr[i]&(1<<bitcnt))!=0){
	        one^=arr[i];
	    }
	    else{
	        zero^=arr[i];
	    }
	    //1 to n
	    if(((i+1)&(1<<bitcnt))!=0){
	        one^=(i+1);
	    }
	    else{
	        zero^=(i+1);
	    }
	}
	
	int cnt=0;
	for(auto it:arr){
	    if(one==it)cnt++;
	}
	if(cnt==2)return {one,zero};
	else return {zero,one};
}
int main() {
    
	vector<int>arr={3,5,4,1,2,5,7};
	int n=7;
	pair<int,int>res=fndmsng_n_rptng(arr,n);
	
	cout<<res.first<<" "<<res.second;
	
	return 0;
}


    // Using Array Marking - and sum O(n) Time and O(1) Space