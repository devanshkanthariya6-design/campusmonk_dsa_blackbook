//majority element -2 
// TC-O(N) SC-O(N)
/*vector<int> majorityElement(vector<int>& nums) {
        vector<int>major;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]+=1;
        }
        for(auto it:mp){
            if(it.second>(nums.size()/3))major.push_back(it.first);
        }
        return major;
    }*/

// IN PLACE - MOORE'S VOTING ALGORITHM
#include <bits/stdc++.h>
using namespace std;
vector<int>findMajority(vector<int>arr){
    int n=arr.size();
    int el1=-1,el2=-1,cnt1=0,cnt2=0;
    for(auto it:arr){
        if(it==el1)cnt1++;
        else if(it==el2)cnt2++;
        else if(cnt1==0){
            el1=it;
            cnt1++;
        }
        else if(cnt2==0){
            el2=it;
            cnt2++;
        }
        else{
            cnt1--;
            cnt2--;
        }
    }
    vector<int>res;
    cnt1=0,cnt2=0;
    for(auto it:arr){
        if(it==el1)cnt1++;
        if(it==el2)cnt2++;
    }
    if(cnt1>n/3)res.push_back(el1);
    if(cnt2>n/3 && el1!=el2)res.push_back(el2);
    if(res.size()==2 && res[0]>res[1])swap(res[0],res[1]);
    return res;
}
int main() {
	 vector<int> arr = {2, 2, 3, 1, 3, 2, 1, 1};
    vector<int> res = findMajority(arr);
    for (int ele : res) {
        cout << ele << " ";
    }
    return 0;
}