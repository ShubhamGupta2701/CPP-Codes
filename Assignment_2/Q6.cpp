#include<iostream>
using namespace std;
int main(){
    int n = 5, marks[n], i, total_marks = 0, percentage;
    for(i=0;i<n;i++){
        cout << "Enter marks out of 100 : ";
        cin>>marks[i];
    }
    for(i=0;i<n;i++){
       total_marks =total_marks + marks[i];
    }
    cout<<total_marks<<endl;
    percentage = total_marks/5;
    cout<<percentage<<endl;
    if(percentage >= 60){
        cout<<"First Division";
    }
    else if(percentage >= 50 && percentage <= 59){
        cout<<"Second Division";
    }
    else if(percentage >= 40 && percentage <= 49){
        cout<<"Third Division";
    }
    else{
        cout<<"You are Fail";
    }
    return 0;
}