#include<iostream>
using namespace std;
int main(){
    int i, j, m, n;
    cout<<"Enter the size of the two arrays in m*n : ";
    cin>>m>>n;
    int arr1[m][n], arr2[m][n];
    cout<<"Enter the value of array 1 : "<<endl;
    for(int i=0;i<m;i++){
        for(j=0;j<n;j++){
            cin>>arr1[i][j];
        }
    }
    cout<<"Enter the value of array 2: "<<endl;
    for(int i=0;i<m;i++){
        for(j=0;j<n;j++){
            cin>>arr2[i][j];
        }
    }
    cout<<"Sum of 2 arrays are : "<<endl;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cout<<arr1[i][j]+arr2[i][j]<<"  ";
        }
    }
    return 0;
}