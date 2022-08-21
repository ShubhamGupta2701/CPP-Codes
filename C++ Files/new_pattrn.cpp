#include<iostream>
using namespace std;
void InputArray(int arr[][100],int r, int c){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
}
void WavePrint(int arr[][100],int r,int c){
    int i=0,j=0;
    for(j=0;j<c;j++){
        if(j%2==0){
            for(i=0;i<r;i++){
                cout<<arr[i][j]<<" ";
            }
        }
        else{
            for(i=r-1;i>-1;i--){
                cout<<arr[i][j]<<" ";
            }
        }
    }
}
int main()
{
    int input[100][100];
    int r,c;
    cin>>r>>c;
    InputArray(input,r,c);
    WavePrint(input,r,c);
    return 0;

}