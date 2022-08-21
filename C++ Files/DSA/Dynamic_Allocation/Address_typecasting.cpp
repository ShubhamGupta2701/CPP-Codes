#include<iostream>
using namespace std;
int main(){
    int a = 100;
    int* p = &a;
    char* pc = (char*)p;
    cout<<*p<<endl;
    cout<<*pc<<endl;
    return 0;
}