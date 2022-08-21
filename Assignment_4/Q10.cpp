#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int i;
    char str[30] = "shubam is a boy";
    cout<<"Enter a string : ";
    cin>>str;
    for(i=(strlen(str)-1);i>=0;i--){
        cout<<str[i];
    }
    return 0;
}