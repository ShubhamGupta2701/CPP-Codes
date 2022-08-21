#include<iostream>
using namespace std;
int main(){
	int i,j,n,sign = -1;
	float x,val = 0;
	cout<<"Enter the value of x : ";
	cin>>x;
	cout<<"Enter the value of maximum power : ";
	cin>>n;
	for(i=2;i<=n;i+=2){
		int fact = 1;
		float power = 1;
		for(j=1;j<=i;j++){
			power = power*x;
			fact = fact*j;
			}
			val += sign*power/fact;
			sign = -1*sign;
		if(0.0001 <= val){
			break;
		}
	}
	cout<<"The solution of cos "<<x<<" is : "<<1+val;
	return 0;
}