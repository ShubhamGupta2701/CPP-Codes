#include<iostream>
using namespace std;
int main(){
    int n,m,i,j,k,l;
    cout<<"Enter the size of array : ";
    cin>>n>>m;
    int arr[n][m];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Output is : "<<endl;
    for(k=n;k>0;k--){
        l=n-k;
        for(i=0;i<k;i++){
            for(j=0;j<m;j++){
                cout<<arr[l][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}