#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int index;
    string s,search;
    cout<<"Enter the value of string : ";
    getline(cin,s);
    cout<<"Enter the value you want to search : ";
    cin>>search;
    index = s.find(search);
    cout<<search<<" is found at location : "<<index;
    return 0;
}