//count subarrays with sum k
// brute - two loops - all subarrays
//optimised  (two pointer wont work for negatives as well as zero)
#include <bits/stdc++.h>
using namespace std;
int cntsubarrays(vector<int> &v,int k){
    int prefixsum=0;
    int cnt=0;
    unordered_map<int,int>mpp;
    for(int i=0;i<v.size();i++){
        prefixsum+=v[i];
        if(prefixsum==k){
            cnt++;
        }
        if(mpp.find(prefixsum-k)!=mpp.end()){
            cnt+=mpp[prefixsum-k];
        }
        mpp[prefixsum]+=1;
    }
    return cnt;
}
int main() {
	vector<int> v = {0,0,10,0,0,6,0,0,2,7,1,9};
	int k=16;
	cout<<cntsubarrays(v,k);
}