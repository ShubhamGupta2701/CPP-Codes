#include<iostream>
using namespace std;
int main(){
    int *j;
    int i = 10;
    cout<<"address of i is : "<<&i<<" and the value of i is : "<<i<<endl;
    j = &i;
    cout<<"Modified value of i is : "<<*j+5<<endl;
    cout<<"Memory allocate to pointer to is : "<<sizeof(j)<<endl;
    return 0;
}