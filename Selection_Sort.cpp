# include<iostream>
using namespace std;
int main(){
	int temp;
	int i,j,n,min;
	cout<<"Enter the size of the array : "<<endl;
	cin>>n;
	int arr[n];
	cout<<"Enter the values of the array"<<endl;
	for(i = 0; i < n; i++){
		cin>>arr[i];
	}
	for(i = 0;i<n-1;i++){
		min = i;
		for(j = i+1;j<n;j++){
			if(arr[j]<arr[min]){
				min = j;
			}
		}
		if(min != i){
			temp = arr[min];
			arr[min] = arr[i];
			arr[i] = temp;
		}
	}
	cout<<"New Sorted Array is : ";
	for(i = 0;i<n;i++){
		cout<<" "<<arr[i];
	}
return 0;
}
