#include<iostream>
using namespace std;
int main(){
    int price_per_item, total_expenses, expenses = 0, quantity, total_items, i;
    cout<<"Enter number of total_items : ";
    cin>>total_items;
    for(i=0;i<total_items;i++)
    {
        cout<<"Enter Quantity of item "<<i+1<<" and price per item : "<<endl;
        cin>>quantity>>price_per_item;
        expenses = expenses + (quantity*price_per_item);
    }
    if(expenses > 5000){
        total_expenses = 0.1*expenses;
    }
    else{
        total_expenses = expenses;
    }
    cout<<"Total expenses are : "<<total_expenses;
    return 0;
}