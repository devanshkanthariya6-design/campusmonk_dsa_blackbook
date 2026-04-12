#include <bits/stdc++.h>
using namespace std;
int maxcardssum(vector<int>&v,int k){
    int leftsum=0;
    for(int i=0;i<k;i++)leftsum+=v[i];
    int rightsum=0;
    int maxsum=leftsum;
    int r=v.size()-1;
    for(int i=k-1;i>=0;i--){
        leftsum-=v[i];
        rightsum+=v[r--];
        maxsum=max(maxsum,rightsum);
    }
    return maxsum;
}
int main() {
	vector<int>v={1,2,15,4,5,6,1};
	int k=3;
	cout<<maxcardssum(v,k);

}