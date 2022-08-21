#include<iostream>
using namespace std;

int is_home(int s,int d){
    if(s==d){
        cout<<"home reached"<<endl;
    }
    s++;
    if(s<d){
        cout<<"not reached"<<endl;
    }
    return is_home(s,d);
}
int main(){
    int s=1,d=20;
    cout<<is_home(s,d);
    return 0;
}
