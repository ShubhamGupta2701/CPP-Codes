#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
int main(){
	
	int check;
	int i;
	int n;
	cout<<"Enter the lenght of your name";
	cin>>n;
	i = n;
	char name[n];
	cout<<"Enter your name ----> ";
	cin>>name[n];
	cout<<"You want to see your name in reverse order...\nIf yes than Enter 1 \nIf no than Enter 0";
	cin>>check;
	if(check == 1){
		for(n = i;n>=0;n--){
			cout<<name[n];
		}
	}
	else{
		cout<<"\nThank You";
	}
	return 0;
	}
