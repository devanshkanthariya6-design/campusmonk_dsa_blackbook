 //second max element in an array
 
 /*int getSecondLargest(vector<int> &arr) {
        // code here
        int maxi=-1;
        for(int i=0;i<arr.size();i++){
            maxi=max(maxi,arr[i]);
        }
        int secmax=-1;
        for(int i=0;i<arr.size();i++){
            if(arr[i]<maxi){
                secmax=max(secmax,arr[i]);
            }
        }
        return secmax;
    }*/

    
/*#include<iostream>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    stringstream ss(s);
    string token;
    vector<int>v;
    while(getline(ss,token,' ')){
        int num=stoi(token);
        v.push_back(num);
    }
    int sh=-1;
    int h=v[0];
    for(int i=1;i<v.size();i++){
        if(v[i]>sh && v[i]<h)sh=v[i];
        else if(v[i]>sh && v[i]>h) sh=h;
    }
    cout<<sh;
}  */