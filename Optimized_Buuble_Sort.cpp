  #include<iostream>
  using namespace std;
  
  int main(){
  	int n,i,j,temp;
  	cout<<"Enter the size of the array: ";
  	cin>>n;
  	int arr[n];
  	cout<<"Enter the values of the Array: ";
  	for(i=0;i<n;i++){
  		cin>>arr[i];
	  }
	
	for(i=0;i<n;i++){
		bool check = false;
		for(j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				check = true;
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
 		if(check == false){
 			cout<<"Number of the passes are: "<<i+1<<endl;
			break;	
		}
	}
	cout<<"Sorted Array is : ";
	for(i=0;i<n;i++){
		cout<<" "<<arr[i];
	}
	return 0;
}
