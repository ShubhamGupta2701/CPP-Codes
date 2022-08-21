#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream f1;
    f1.open("NUMBERS.txt");
    for(int i=1;i<=100;i++){
        f1<<i<<endl;
    }
    f1.close();
    return 0;
}