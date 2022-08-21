#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter any integer number : ";
    cin>>num;
    if(num%2 == 0){
        cout<<"Number Enter by user is an even number .. "<<endl;
    }
    else{
        cout<<"Number Enter by user is not an even number .."<<endl;
    }
    return 0;
}