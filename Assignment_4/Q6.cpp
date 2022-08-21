#include<iostream>
using namespace std;
int main(){
    int i, n;
    cout<<"Enter the size of the string : ";
    cin>>n;
    char str[n];
    cout<<"Enter the value of string : ";
    cin>>str;
    for(i=0;i<n;i++){
        if(str[i]  != str[n-i-1]){
        cout<<"String is not palindrome";
        break;
        }
        else{
            if(i==n-1)
            cout<<"String is palindrom";
        }
    }
    return 0;
}