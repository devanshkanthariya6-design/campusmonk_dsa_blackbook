//brute force - 
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int>a={3, 2, 1, 5, 4};
    vector<int>b={1, 2, 3, 4 , 5};
    int cnt=0;
    for(int i=0;i<a.size();i++){
        if(a[i]!=b[i]){
            for(int j=i;j<b.size();j++){
                if(b[j]==a[i]){
                    swap(b[i],b[j]);
                    cnt++;
                }
            }
        }
    }
    cout<<cnt;
}
//better
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int>a={3, 2, 1, 5, 4};
    vector<int>b={1, 2, 3, 4 , 5};
    unordered_map<int,int>mp;
    for(int i=0;i<a.size();i++)mp[a[i]]=i;
    vector<pair<int,int>>v;
    for(int i=0;i<b.size();i++){
        v.push_back({b[i],mp[b[i]]});
    }
    int cnt=0;
    for(int i=0;i<v.size();i++){
        if(v[i].second!=i){
            cnt++;
            swap(v[i],v[v[i].second]);
            i--;
        }
    }
    cout<<cnt;
}
//also works for finding min swaps to sort an array
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int>a={3, 2, 1, 5, 4};
    vector<pair<int,int>>v;
    for(int i=0;i<a.size();i++)v.push_back({a[i],i});
    sort(v.begin(),v.end());
    int cnt=0;
    for(int i=0;i<v.size();i++){
        if(v[i].second!=i){
            cnt++;
            swap(v[i],v[v[i].second]);
            i--;
        }
    }
    cout<<cnt;
}
