#include<iostream>
using namespace std;
int main(){
    int x,y,z;
    cout<<"Enter the ages of X, Y, Z respectivly : ";
    cin>>x>>y>>z;
    if(x<y && x<z){
        cout<<"X is Youngest";
    }
    else if(y<x && y<z){
        cout<<"Y is Youngest";
    }
    else if(z<x && z<y){
        cout<<"Z is Youngest";
    }
    else if(x == y && x<z && y<z){
        cout<<"X and Y both are Youngest";
    }
    else if(y == z && y<x && z<x){
        cout<<"Y and Z both are Youngest";
    }
    else if(x == z && x<y && z<y){
        cout<<"X and Z both are Youngest";
    }
    else{
        cout<<"X , Y and Z all are of same age.";
    }
    return 0;
}