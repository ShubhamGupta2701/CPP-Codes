#include<iostream>
using namespace std;
int main(){
    int i, n, max, min;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the value of array : ";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    min = arr[0];
    max = arr[0];
    for(i=1;i<n;i++){
        if(max < arr[i]){
            max = arr[i];
        }
        if(min > arr[i]){
            min = arr[i];
        }
    }
    cout<<"min is : "<<min<<" and max is : "<<max;
    return 0;
}