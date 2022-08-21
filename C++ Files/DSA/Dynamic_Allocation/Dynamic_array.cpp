#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of array : ";
    cin>>n;
    int* p = new int[n];
    for(int i = 0;i<n;i++){
        cin>>p[i];
    }
    cout<<"maximum of element in the array is : ";
    int max = -1;
    for(int i =0;i<n;i++){
        if(max < p[i]){
            max = p[i];
        }
    }
    delete []p;
    cout<<max;
    return 0;
}