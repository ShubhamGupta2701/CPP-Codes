#include<iostream>
using namespace std;
int main(){
    int Gross_salary, HR_allowance, Net_salary, basic_pay, perks = 0, c_allowance, e_allowance, i_tax, e_job_no, level_no;
    cout<<"Enter executive's job number : ";
    cin>>e_job_no;
    cout<<"Enter your basic salary : ";
    cin>>basic_pay;
    cout<<"Enter level number : ";
    cin>>level_no;
    HR_allowance = basic_pay*0.25;
    switch(level_no){
        case 1:
            c_allowance = 1000;
            e_allowance = 500;
            perks = c_allowance + e_allowance;
            break;
        case 2:
            c_allowance = 750;
            e_allowance = 200;
            perks = c_allowance + e_allowance;
            break;
        case 3:
            c_allowance = 500;
            e_allowance = 100;
            perks = c_allowance + e_allowance;
            break;
        default:
            c_allowance = 250;
            e_allowance = 0;
            perks = c_allowance + e_allowance;
    }
    Gross_salary = basic_pay + HR_allowance + perks;
    if(Gross_salary <= 2000){
        i_tax = 0;
    }
    else if(Gross_salary > 2000 && Gross_salary <= 4000){
        i_tax = Gross_salary*0.03;
    }
    else if(Gross_salary > 4000 && Gross_salary <= 5000){
        i_tax = Gross_salary*0.05;
    }
    else{
        i_tax = Gross_salary*0.08;
    } 
    Net_salary = Gross_salary - i_tax;
    cout<<"Gross salary : "<<Gross_salary<<endl;
    cout<<"Income Tax is : "<<i_tax<<endl;
    cout<<"Net salary : "<<Net_salary<<endl;
    return 0;
}