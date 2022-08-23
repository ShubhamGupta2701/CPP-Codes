#include<iostream>
using namespace std;
int main(){
    int i,n,array_sum=0;
    cout<<"Enter size of the array : ";
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n;i++){
        array_sum += arr[i];
    }
    cout<<"Sum of the array is : "<<array_sum;
    return 0;
}