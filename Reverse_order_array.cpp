#include<iostream>
using namespace std;
int main(){
    int i,n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the values in array"<<endl;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Reverse order array is : ";
    for(i=n-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
    return 0;
}