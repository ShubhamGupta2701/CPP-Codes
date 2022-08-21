#include<iostream>
#include<string>
using namespace std;
int main(){
    int num;
    cout<<"Enter number of cars : ";
    cin>>num;
    cin.ignore(); // this is used because we use pointers to declare a string list.
    string* pCars = new string[num];
    for(int i=0;i<num;i++){
        cout<<"car number "<<i+1;
        getline(cin,pCars[i]);
    }
    cout<<"your cars are : "<<endl;
    for(int i=0;i<num;i++){
        cout<<pCars[i]<<" ";
    }
    return 0;
}