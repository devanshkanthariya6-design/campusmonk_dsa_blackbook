//maximum subarray - By iterating over all subarrays - O(n^2) Time and O(1) Space

/*int maxSubArray(vector<int>& arr) {
        int maxsum=INT_MIN;
        for(int i=0;i<arr.size();i++){
            int sum=0;
            for(int j=i;j<arr.size();j++){
                sum+=arr[j];
                maxsum=max(maxsum,sum);
            }
        }
        return maxsum;
    }*/

//kadanes's algorithm -  O(n) Time and O(1) Space
 /*	int res=INT_MIN;
	int maxending=0;
	for(int i=0;i<n;i++){
	    maxending=max(v[i],(maxending+v[i]));
	    res=max(res,maxending);
	}
	cout<<res;*/

//for printing array as well    
#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <limits>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int>v;
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    string s;
    getline(cin,s);
    stringstream ss(s);
    int num;
    while(ss>>num){
        v.push_back(num);
    }
    if(n<=0 || v.size()!=n){
        cout<<"error";
        return 0;
    }
    int res=v[0];
    int maxending=v[0];
    int start=0;
    int end=0;
    int tempstart=0;
    for(int i=1;i<n;i++){
        if(v[i]>v[i]+maxending){
            maxending =v[i];
            tempstart=i;
        }
        else maxending=maxending+v[i];
        if(maxending>res){
             res=maxending;
             start=tempstart;
             end=i;
        }
    }
    cout<<"Maximum Sum = "<<res<<endl;
    cout<<"Subarray = ";
    for(int i=start;i<=end;i++)cout<<v[i]<<" ";
    return 0;
}
   