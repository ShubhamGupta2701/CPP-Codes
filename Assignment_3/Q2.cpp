#include<iostream>
using namespace std;
int main(){
    int age[200];
    int i,n=0;
    cout<<"Enter age of 200 persons : ";
    for(i=0;i<200;i++){
        cin>>age[i];
    }
    for(i=0;i<200;i++){
        if(age[i]>=50 && age[i]<=60){
            n += 1;   // Or we use count += 1
        }
    }
    cout<<n;
    return 0;
}