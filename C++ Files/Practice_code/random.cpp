#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;
int main(){
    srand(time(NULL)); //This one create a timestamp to initialize our randomized numbers. 
    int number = rand() % 10 +1; // here we decide the values from which it will randomly give output to us.
    cout<<number;
    return 0;
}