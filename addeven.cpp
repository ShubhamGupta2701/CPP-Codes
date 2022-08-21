#include<iostream>
using namespace std;

int main(){
    int i,n,sum=0;
    
    cout<<"Enter how many nmbers: ";
    cin>>n;
    int m[n];
    cout<<"Enter numbers : ";
    for(i=0;i<n;i++){
        cin>>m[i];
    }
    for(i=0;i<n;i++){
        if(m[i]%2 == 0){
            sum =sum + m[i];
        }
    }
    cout<<"Total sum of all the even numbers : "<<sum;

    return 0;
}
