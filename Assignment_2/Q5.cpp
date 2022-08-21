#include<iostream>
using namespace std;
int main(){
    int monthly_bills,number_of_calls,call_150, call_200, calls, minimum_price = 200;
    cout<<"Enter number of calls : ";
    cin>>number_of_calls;
    if(number_of_calls <= 100){
        monthly_bills = minimum_price;
    }
    else if(number_of_calls > 100 && number_of_calls <=150){
        calls = number_of_calls - 100;
        monthly_bills = minimum_price + calls*0.60;
    }
    else if(number_of_calls > 150 && number_of_calls <= 200){
        calls = 50*0.60;
        call_150 = number_of_calls - 150;
        monthly_bills = minimum_price + calls + call_150*0.50;
    }
    else{
        calls = 50*0.60;
        call_150 = 50*0.50;
        call_200 = number_of_calls - 200;
        monthly_bills = minimum_price + calls + call_150 + call_200*0.40;
    }
    cout<<"Total monthly telephone bills are : "<<monthly_bills;
    return 0;
}