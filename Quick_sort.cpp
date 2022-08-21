#include<iostream>

using namespace std;

int partition(int arr[], int s,int e){
	int pivot = arr[e];
	int pindex = s;
	for(int i=s;i<e;i++){
		if(arr[i]<pivot){
			int temp = arr[i];
			arr[i]= arr[pindex];
			arr[pindex] = temp;
			pindex++;
		}
	}
	int temp = arr[e];
	arr[e] = arr[pindex];
	arr[pindex] = temp;
	return pindex;
} 

void quicksort(int arr[],int s,int e){
	if(s < e){
		int p = partition(arr,s,e);
		quicksort(arr,s,(p-1));
		quicksort(arr,(p+1),e);
	}
}

int main(){
	int myarr[5];
	cout<<"before Quick sort: "<<" ";
	for(int i=0;i<5;i++){
		cin>>myarr[i];
	}
	
	quicksort(myarr,0,4);
	
	cout<<"After sorting : ";
	for(int i=0;i<5;i++){
		cout<<myarr[i]<<" ";
	}
	
	return 0;
}
