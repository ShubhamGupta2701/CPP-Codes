#include<iostream>
using namespace std;
int main(){
    int i,j,k,n;
    cout<<"Enter number of stars : ";
    cin>>n;
    for(i=0;i<n;i++){
        for(j=1;j<n-i;j++){
            cout<<"   ";
        }
        for(k=0;k<=i;k++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(i=n-1;i>0;i--){
        cout<<"   ";
        for(j=1;j<n-i;j++){
            cout<<"   ";
        }
        for(k=1;k<=i;k++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}