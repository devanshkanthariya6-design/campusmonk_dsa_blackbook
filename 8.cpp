// armstrong number

#include<iostream>
#include<cmath>
using namespace std;
int countdigit(int n){
      if(n==0)return 1;
      int cnt=0;
      while(n!=0){
          n=n/10;
          cnt++;
      }
      return cnt;
  }
 bool armstrongNumber(int n) {
        int temp=n;
        int cnt = countdigit(n);
        int sum=0;
        while(n!=0){
            int digit=n%10;
            //sum=sum+(int)pow(digit,cnt);//pow function gives double value so even after typecast it gives imprecise result
            int power = 1;
            for(int i=1;i<=cnt;i++){
                power*=digit;
            }
            sum+=power;
            n=n/10;
        }
        return sum==temp;
    }
int main(){
    int n;
    cin>>n;
    cout<<armstrongNumber(n);
}