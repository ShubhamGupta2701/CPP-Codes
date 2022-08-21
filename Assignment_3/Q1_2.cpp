#include<iostream>
using namespace std;
int main(){
    int i,n,j,k,max;
    cout<<"Enter value of n : ";
    cin>>n;
    max = n;
    for(i=n;i>0;i--){
        if(i==max){
            cout<<"";
        }
        else{
        for(j=0;j<n-i;j++){
           cout<<" ";
            }
        }
       for(k=1;k<=i;k++){
           cout<<"*";
       }
       cout<<endl;
    }
}