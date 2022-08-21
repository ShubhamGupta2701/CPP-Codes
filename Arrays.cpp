#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i,n;
	
	cout<<"Enter the size of the array: ";
	cin>>n;
	int a[n];
	
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	for(i=0;i<n;i++){
		cout<<a[i];
		cout<<"\n";
	}
	
}
