#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"Enter Year : ";
    cin>>year;
    if((year%4 == 0 && year%100 != 0) || year%400 == 0){
        cout<<"Year is a leap year";
    }
    else{
        cout<<"year is not a leap year";
    }
    return 0;
}