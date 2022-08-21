#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter two numbers on which you want to peform arthimatic operations : ";
    cin>>a>>b;
    cout<<" Addition : 1 \n Substraction : 2 \n Multiply : 3 \n Divide : 4 \n Modulo : 5 \n Enter Number of operation : ";
    cin>>c;
    switch(c){
        case 1:
            cout<<"Addition of "<<a<<" and "<<b<<" is : "<<a+b;
            break;
        case 2:
            cout<<"Substraction of "<<a<<" and "<<b<<" is : "<<a-b;
            break;
        case 3:
            cout<<"Divide of "<<a<<" and "<<b<<" is : "<<a/b;
            break;
        case 4:
            cout<<"Multiply of "<<a<<" and "<<b<<" is : "<<a*b;
            break;
        case 5:
            cout<<"Modulo of "<<a<<" and "<<b<<" is : "<<a%b;
            break;
        default:
            cout<<"Please enter a valid number ..";
    }
    return 0;
}
