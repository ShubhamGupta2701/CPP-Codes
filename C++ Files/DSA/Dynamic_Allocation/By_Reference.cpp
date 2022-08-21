#include<iostream>
using namespace std;
int f(int& n){
    int a = n;
    a++;
    return a;
}
int main(){
    int i = 10;
    int& j = i;
    cout<<j<<endl;
    for(int a = 0;a<10;a++){
        i++;
        cout<<j<<" ";
    }
    int k = 20;
    j = k;
    cout<<endl<<i<<" "<<j<<endl;
    cout<<f(j)<<endl;
    cout<<k<<endl;
    return 0;
}