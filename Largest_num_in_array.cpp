#include<iostream>
using namespace std;
int main(){
    int i,n,max = -1;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n-1;i++){
        if(arr[i] > arr[i+1]){
            max = arr[i];
        }
        else{
            max = arr[i+1];
        }
    }
    cout<<"Maximum of the array is : "<<max;
    return 0;
}