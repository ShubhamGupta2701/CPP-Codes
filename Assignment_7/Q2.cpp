#include<iostream>
#include<fstream>
using namespace std;
void count(){
    int size = 0;
    char c;
    ifstream f1;
    f1.open("OUT.txt");
    if(f1.is_open() == true){
        while(!f1.eof()){
            f1.get(c);
            if(isalpha(c)){
                size++;
            }
        }
        cout<<"Number of alphabets in file is : "<<size;
    }
    else{
        cout<<"File can't be open.";
    }
    f1.close(); 
}
int main(){
    count();
    return 0;
}