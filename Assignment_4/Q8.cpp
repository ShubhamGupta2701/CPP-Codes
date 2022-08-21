#include<iostream>
#include<ctype.h>
using namespace std;
int main(){
    int i;
    string s1,s2;
    cout<<"Enter the value of 1st string : ";
    cin>>s1;
    cout<<"Enter the value of 2nd string : ";
    cin>>s2;
    if(s1.compare(s2) != 0){
        cout<<"String is not same";
    }
    else{
        cout<<"String is same";
    }
    return 0;
}