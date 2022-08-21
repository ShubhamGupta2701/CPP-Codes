#include<iostream>
using namespace std;
int fibonci(int n){
    if(n<2){
        return n;
    }
    return fibonci(n-1)+fibonci(n-2);
}
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
        cout<<fibonci(i)<<endl;
    return 0;
}