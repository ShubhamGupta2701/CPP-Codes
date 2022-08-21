#include<iostream>
using namespace std;
int main(){
    int i,j,k;
    for(i=0;i<6;i++){
        int value =1;
        for(j=1;j<=6-i;j++){
            cout<<"   ";
        }
        for(k=0;k<=i;k++){
            if(i==0 || k==0){
                value = 1;
            }
            else{
                value = value*(i-k+1)/k;
                cout<<"  ";
            }
            cout<<"   "<<value;
        }
        cout<<endl;
    }
    return 0;
}