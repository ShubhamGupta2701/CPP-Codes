#include<iostream>

using namespace std;

void merge(int arr[],int l,int m,int r){
	int i = l;
	int j = m+1;
	int k = l;
	int temparr[5];
	while(i<=m && j<=r){
		if(arr[i]<=arr[j]){
			temparr[k] = arr[i];
			i++;
			k++;
		}
		else{
			temparr[k] = arr[j];
			j++;
			k++;
		}
	}
	
	while(i<=m){
		temparr[k] = arr[i];
		i++;
		k++;
	}
	
	while(j<=r){
		temparr[k] = arr[j];
		j++;
		k++;
	}
	for(int a=l;a<=r;a++){
		arr[a] = temparr[a]; 
	}
}

void mergesort(int arr[],int l,int r){
	if(l<r){
		int m = (l+r)/2;
		mergesort(arr,l,m);
		mergesort(arr,m+1,r);
		merge(arr,l,m,r);
	}
}


int main(){
	int myarr[5];
	cout<<"before merge sort: "<<endl;
	for(int i=0;i<5;i++){
		cin>>myarr[i];
	}
	
	mergesort(myarr,0,4);
	
	cout<<"After sorting : "<<endl;
	for(int i=0;i<5;i++){
		cout<<myarr[i]<<" ";
	}
	
	return 0;
}
