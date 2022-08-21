#include<iostream>
using namespace std;
int main(){
    int i, n;
    cout<<"Enter size of array : ";
    cin>>n;
    int a[n];
    cout<<"Enter the values in array : "<<endl;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    int temp = a[0];
    a[0] = a[n-1];
    a[n-1] = temp;
    cout<<"The new array is : "<<endl;
    for(i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
    return 0;
}