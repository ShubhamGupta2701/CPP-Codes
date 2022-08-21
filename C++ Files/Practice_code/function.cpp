#include<iostream>
#include<string>
using namespace std;
void hello(string s){
    cout<<"hello "<<s;
}
int main(){
    string name;
    cout<<"enter your name : ";
    getline(cin,name);
    hello(name);
    return 0;
}
