#include<iostream>
using namespace std;
int main(){
    int basic_salary, hra, da, gross_salary;
    cout<<"Enter employee's basic salary : ";
    cin>>basic_salary;
    if(basic_salary < 1500){
        hra = basic_salary*0.10;
        da = basic_salary*0.90;
        gross_salary = basic_salary + hra + da;
    }
    else{
        hra = 500;
        da = basic_salary*0.98;
        gross_salary = basic_salary + hra + da;
    }
    cout<<"Gross salary of the employee : "<<gross_salary;
    return 0;
}