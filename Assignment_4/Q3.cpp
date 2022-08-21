#include<iostream>
using namespace std;
int main(){
    int i, j, n, m, l_diagonal = 0, r_diagonal = 0;
    cout<<"Enter the size of array : ";
    cin>>n>>m;
    int arr[n][m];
    cout<<"Enter the value of array : "<<endl;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(i == j){
                l_diagonal = l_diagonal + arr[i][j];
            }
            if(i+j == n-1){
                r_diagonal += arr[i][j];
            }
        }
    }
    cout<<"Sum of left diagonal is : "<<l_diagonal<<endl;
    cout<<"Sum of right diagonal is : "<<r_diagonal;
    return 0;
}