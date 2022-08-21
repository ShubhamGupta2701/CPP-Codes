#include<iostream>
#include<string>
using namespace std;
class student{
    public:
    string name;
    int age;

    void show(){
        cout<<this->name<<" is awesome.";
    }
};
int main(){
    student n1;
    n1.name = "shubham";
    n1.age = 21;
    n1.show();
    return 0;
}