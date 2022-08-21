#include<iostream>
using namespace std;
int binary_search(int arr[],int x,int low,int high){
    int mid = (low+high)/2;
    if(arr[mid] == x){
        return mid;
    }
    else if(arr[mid] > x){
        high = mid;
        return binary_search(arr,x,low,high);
    }
    else{
        low = mid+1;
        return binary_search(arr,x,low,high);
    }
}
int main(){
    int low=0,high=5;
    int arr[5] = {1,2,4,5,7};
    cout<<binary_search(arr,5,low,high);
    return 0;
}