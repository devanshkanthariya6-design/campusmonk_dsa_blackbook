//longest subarray with sum k
#include <bits/stdc++.h>
using namespace std;
//brute
int maxsubarrays(vector<int> &v,int k){
    int res=0;
    for(int i=0;i<v.size();i++){
        int sum=0;
        for(int j=i;j<v.size();j++){
            sum+=v[j];
            if(sum==k)res=max(res,(j-i+1));
        }
    }
    return res;
}
//better for positives negatieves,zeroes
int maxsubarrays(vector<int> &v,int k){
    int prefixsum=0;
    int maxlen=0;
    unordered_map<int,int>mpp;
    for(int i=0;i<v.size();i++){
        prefixsum+=v[i];
        if(prefixsum==k){
            maxlen=i+1;
        }
        if(mpp.find(prefixsum-k)!=mpp.end()){
            maxlen=max(maxlen,(i-mpp[prefixsum-k]));
        }
        if(mpp.find(prefixsum)==mpp.end())mpp[prefixsum]=i;
    }
    return maxlen;
}
//optimised for non negatives
int maxsubarrays(vector<int> &v,int k){
    int n = v.size() ;
    int left=0;
    int right=0;
    int maxlen=0;
    int currsum=0;
    while(right<n){
        currsum+=v[right];
        while(currsum>k){
            currsum-=v[left++];
        }
        if(right<n && currsum==k)maxlen=max(maxlen,right-left+1);
        right++;
    }
    return maxlen;
}
int main() {
	vector<int> v = {10,5,2,7,1,9};
	int k=15;
	cout<<maxsubarrays(v,k);
}