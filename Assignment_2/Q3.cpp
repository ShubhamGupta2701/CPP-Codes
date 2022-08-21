#include<iostream>
using namespace std;
int main(){
    int total_items, actual_cost, selling_price, i, total_amount = 0, total_actual_amount = 0, quantity,loss,profit;
    cout<<"Enter how many items were sell by user : ";
    cin>>total_items;
    for(i=0;i<total_items;i++){
        cout<<"Enter quantity of item "<<i+1<<", actual price of item and selling price of item : "<<endl;
        cin>>quantity>>actual_cost>>selling_price;
        total_amount = total_amount + quantity*selling_price;
        total_actual_amount = total_actual_amount + quantity*actual_cost;
    }
    if(total_actual_amount > total_amount){
        loss = total_amount - total_actual_amount;
        cout<<"Seller incurred loss of : "<<loss;
    }
    else if(total_actual_amount < total_amount){
        profit = total_actual_amount-total_amount;
        cout<<"Seller made a profit of : "<<profit;
    }
    else{
        cout<<"Seller doesn't made any profit or incurred any lose......";
    }
    return 0;
}