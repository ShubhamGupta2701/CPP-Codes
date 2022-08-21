#include<iostream>
using namespace std;
int min_max(int arr[],int low,int high,int min,int max){
    if (low == high)                    // common comparison
    {
        if (max <arr[low]) {           // comparison 1
            max = arr[low];
        }
 
        if (min > arr[high]) {          // comparison 2
            min = arr[high];
        }
 
        return;
    }
     if (high - low == 1)                // common comparison
    {
        if (arr[low] < arr[high])       // comparison 1
        {
            if (min > arr[low]) {       // comparison 2
                min = arr[low];
            }
 
            if (max < arr[high]) {      // comparison 3
                max = arr[high];
            }
        }
        else {
            if (min > arr[high]) {      // comparison 2
                min = arr[high];
            }
 
            if (max < arr[low]) {       // comparison 3
                max = arr[low];
            }
        }
        return;
    }
    mid = (low+high)/2;
    min_max(arr,low,mid);
    min_max(arr,mid+1,high);    
}
int main(){
    int arr[5]= {3,2,6,1,7};
    min_max(arr,0,4);
    return 0;
}