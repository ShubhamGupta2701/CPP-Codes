#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter two numbers : ";
    cin>>a>>b;
    cout<<"\nBefore Swapping  a is : "<<a<<" and b is : "<<b<<endl;
    a = a+b;
    b = a-b;        //without using 3rd variable.
    a = a-b;
    cout<<"After Swapping a is : "<<a<<" and b is : "<<b;
    return 0;
}