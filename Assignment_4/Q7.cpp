#include<iostream>
using namespace std;
int main(){
    int i;
    char name[20];
    cout<<"Enter your name : ";
    cin>>name;
    for(i=0;i<20;i++){
        if(name[i] != '\0'){
            if(int(name[i]) <= 90){
                name[i] += 32;
            }
        }
        else{
            break;
        }
    }
    cout<<name;
    return 0;
}