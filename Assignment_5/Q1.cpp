#include<iostream>
#include<string>
using namespace std;
class acc{
    public:
    string d_name;
    int acc_no;
    string acc_type;
    int a_balance;
    void initial(string d_name_,int acc_no_,string acc_type_,int a_balance_){
        d_name = d_name_;
        acc_no = acc_no_;
        acc_type = acc_type_;
        a_balance = a_balance_;
    }
    void deposite(int ammount){
        a_balance = a_balance + ammount;
    }
    void withdraw(int w_ammount){
        if(a_balance != 0){
            cout<<w_ammount<<" is withdraw from "<<a_balance<<endl;
            a_balance = a_balance - w_ammount;
        }
    }
    void display(){
        cout<<"name of the depositer is : "<<this->d_name<<endl;
        cout<<"Balance is : "<<this->a_balance;
    }
};
int main(){
    acc p1;
    p1.initial("shubham",101,"saving",2000);
    p1.deposite(500);
    p1.withdraw(200);
    p1.display();
    return 0;
}