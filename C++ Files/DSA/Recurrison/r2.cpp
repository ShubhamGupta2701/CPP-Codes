#include<iostream>
using namespace std;
int Pow(int m, int n){
    if(n == 0){
        return 1;
    }
    int s_p = Pow(m,n-1);
    int b_p = m * s_p;
    return b_p;
}
int main(){
    int n,m;
    cin>>m>>n;
    cout<<Pow(m,n);
    return 0;
}