#include<iostream>
using namespace std;
void push(int a[],int x,int i){
    a[i] = x;
    cout<<x<<" is inserted in stack at position "<<i+1<<endl;
}
int main(){
    int i,n,val;
    cout<<"Enter the size of stack : ";
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cout<<"Enter "<<i+1<<" value in stack : ";
        cin>>val;
        push(a,val,i);
    }
    cout<<"values in stack is : ";
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}