#include<iostream>
using namespace std;
int main(){
	int i, j, m, n;
	cin>>m>>n;
	int arr[m][n];
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}
	
	cout<<"The output will be: ";
	int k = m;
	while(k>0){
		for(i=0;i<m;i++){
			for(j=0;j<n;j++){
				cout<<arr[k][j]<<" ";
			}
			cout<<endl;
		}
		k--;
	}
	
	return 0;
}
