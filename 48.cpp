// merge two sorted arrays without extra space 

//APPROACH - 1
//O(N^2LOGN)
/*for(int i=0;i<a.size();i++){
    if(a[i]>b[0]){
        swap(a[i],b[0]);
        sort(b.begin(),b.end());
        }
    }*/


//APPROACH -2
//o(N^2)
/*for(int i=0;i<a.size();i++){
            if(a[i]>b[0]){
                swap(a[i],b[0]);
                for(int j=0;j<b.size()-1;j++){
                if(b[j]>b[j+1])swap(b[j],b[j+1]);
                else break;
                }
            }
        }*/
//

//approach 3 swap and sort
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void mergearray(vector<int>&a,vector<int>&b){
    int i=a.size()-1;
    int j=0;
    while(i>=0 && j<b.size()){
        if(a[i]>b[j])swap(a[i--],b[j++]);
        else break;
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
}
int main() {
    vector<int>a={2,4,7,10,20,39};
    vector<int>b={2,3,4,5};
    mergearray(a,b);
    a.insert(a.end(),b.begin(),b.end());
    for(auto it:a){
        cout<<it<<" ";
    }

}