#include<iostream>
using namespace std;
void update(int *a,int *b){
    int c = *a;
    *a = *a+*b;
    *b = abs(c-*b);
}
int main(){
    int a,b;
    int *x = &a,*y = &b;
    cin>>a>>b;
    update(x,y);
    cout<<a<<endl;
    cout<<b;
    return 0;
}