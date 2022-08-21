#include<iostream>
using namespace std;
int main(){
	int m, n;
	cin>>m>>n;
	int arr[m][n];
	for(int i=0;i<m;i++){
		for(int j=0; j<n;j++){
			cin>>arr[i][j];
		}
	}
	cout<<"array in wave form : "<<endl;
	for(int j=0;j<n;j++){
		if(j%2 == 0){
			for(int i=0;i<m;i++){
				cout<<arr[i][j]<<" ";
			}
			cout<<endl;
		}
		else{
			for(int i=m-1;i>=0;i--){
				cout<<arr[i][j]<<" ";
			}
			cout<<endl;
		}
	}
	return 0;
}
