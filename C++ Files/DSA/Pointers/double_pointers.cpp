#include<iostream>
using namespace std;
void increment1(int** p){
    p = p+1;
    cout<<p<<endl;
}
void increment2(int** p){
    *p = *p+1;
    cout<<*p<<endl;
}
void increment3(int** p){
    **p = **p+1;
    cout<<**p<<endl;
}
int main(){
    int i = 10;
    int* p = &i;
    int** p1 = &p;
    increment1(p1);
    increment2(p1);
    increment3(p1);
    cout<<&i<<endl;
    cout<<p<<endl;  //this refer the address of i
    cout<<*p1<<endl;

    cout<<i<<endl;
    cout<<*p<<endl;
    cout<<**p1<<endl;

    cout<<&p<<endl;
    cout<<p1<<endl;
    return 0;
}