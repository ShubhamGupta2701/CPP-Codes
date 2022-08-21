#include<iostream>
using namespace std;
int main(){
    int i;
    char str[50];
    cout<<"Enter the value of string : ";
    cin>>str;
    for(i=0;i<50;i++){
        if(str[i] == '\0'){
            cout<<i;
            break;
        }
    }
    return 0;
}