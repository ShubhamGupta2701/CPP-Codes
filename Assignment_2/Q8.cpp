#include<iostream>
using namespace std;
int main(){
    int angles[3], i, sum_of_angles = 0;
    cout<<"Enter three angles of triangle : ";
    for(i=0;i<3;i++){
        cin>>angles[i];
    }
    for(i=0;i<3;i++){
        sum_of_angles = sum_of_angles + angles[i];
    }
    if(sum_of_angles == 180){
        cout<<"Triangle is valid";
    }
    else{
        cout<<"Triangle is not valid";
    }
    return 0;
}