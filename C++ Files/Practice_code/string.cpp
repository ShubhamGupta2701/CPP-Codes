#include<iostream>
#include<string>
using namespace std;
int main(){
    string name;
    cout<<"Enter your name : ";
    getline(cin,name);
    int l = name.length();
    for(int i=0;i<l;i++){
        cout<<i+1<<" name is : "<<name<<endl;
    }
    return 0;
}