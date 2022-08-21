#include<iostream>
using namespace std;

int fun(int a,int arr[]){
    int total = 0,i;
    for(i=0;i<a;i++){
        total = total + arr[i];
    }
    return total;
}