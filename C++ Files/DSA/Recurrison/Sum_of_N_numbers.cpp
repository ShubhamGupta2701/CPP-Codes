#include<iostream>
using namespace std;
int n_no(int n){
    if(n==1){
        return 1;
    }
    int sum = n_no(n-1);
    int total = n + sum;
    return total;
}
int main(){
    int n = 0;
    cin>>n;
    cout<<n_no(n);
    return 0;
}