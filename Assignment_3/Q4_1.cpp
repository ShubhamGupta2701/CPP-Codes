#include<iostream>
using namespace std;
int main(){
    int i, j, n,sign = -1;
    float x, val = 0;
    cout<<"Enter the value of x: ";
    cin>>x;
    cout<<"Enter value of power : ";
    cin>>n;
    for(i=1;i<=n;i+=2){
        float power = 1;
        int fact = 1;
        for(j=1;j<=i;j++){
            power = power*x;
            fact =fact*j;
        }
        val += sign*power/fact;
        sign = -1*sign;
        if(1+val >= 0.0001){
            break;
        }
    }
    cout<<"The solution of the sin series is : "<<1+val;
    return 0;
}