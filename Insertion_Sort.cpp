#include<iostream>
using namespace std;

int main(){
	int i,n,j;
	cout<<"Enter number of elements : ";
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	for(i=1;i<n;i++){
		int current = arr[i];
		j = i-1;
		while(arr[j]>current && j>=0){
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1]=current;
	}
	cout<<"Sorted array is : ";
	for(i=0;i<n;i++){
		cout<<arr[i]<<" ";

	}
	return 0;	
}
