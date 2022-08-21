#include<iostream>
using namespace std;
int main(){
    int i=2,n;
    bool check= false;
    cout<<"Enter the number you want to check if prime or not : ";
    cin>>n;
    for(i=2;i<n;i++){
        if(n%i==0){
            check = false;
            break;
        }
        else{
            check = true;
        }
    }
    if(check==true){
        cout<<"Number is prime";
    }
    else{
        cout<<"Number is not prime";
    }
    return 0;
}