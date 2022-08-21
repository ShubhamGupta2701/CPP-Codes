#include<iostream>
using namespace std;
void print_arr(int arr[][100],int m,int n){
    int i,j;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int arr[100][100];
    int i,j,m,n;
    cout<<"enter the size of 2D array : ";
    cin>>m>>n;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    print_arr(arr,m,n);
    return 0;
}