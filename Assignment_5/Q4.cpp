#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int roll_no;

    void read(string name_,int roll_no_){
        name = name_;
        roll_no = roll_no_;
    }
    void print(){
        cout<<"Name of the student is : "<<this->name<<" and roll no. is : "<<this->roll_no<<endl;
    }
};
int main(){
    int i;
    student s[10];
    int r_no[10];
    string n_name[10];
    for(i=0;i<10;i++){
        cout<<"enter name and roll no. of student "<<i+1<<": ";
        cin>>n_name[i];
        cin>>r_no[i];
        s[i].read(n_name[i],r_no[i]);
    } 
    for(i=0;i<10;i++){
        s[i].print();
    }
    return 0;
}