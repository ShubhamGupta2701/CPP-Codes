#include<iostream>
#include<string>
using namespace std;
int main(){
    string name = "Shubham";
    int age = 21;
    string* pName = &name;
    int* pAge =&age;
    cout<<*pAge;
    cout<<*pName;
    return 0;
}