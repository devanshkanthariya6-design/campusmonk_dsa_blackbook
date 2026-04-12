//factorial of a number

#include <iostream>
using namespace std;
int fact(int n){
	int num=1;
	for(int i=n;i>=1;i--){
		num=num*i;
	}
	return num;
}
/*second method using recursion
int fact(int n){
	if(n==1)return 1;
	return n*fact(n-1);
}
*/
int main() {
	int num;
	cin >> num;    
	cout <<fact(num) << endl;
}