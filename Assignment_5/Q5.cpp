#include<iostream>
using namespace std;
class count{
    public:
    static int n;

    count(){
        n++;
    }
    
    static int Show_CountObject(){
        return n;
    }
};
int count::n=0;
int main(){
    cout<<"Count when no object : "<<count::Show_CountObject()<<endl;
    count c1,c2,c3,c4,c5;
    cout<<"Count after creating some objects : "<<count::Show_CountObject()<<endl;
    return 0;
}