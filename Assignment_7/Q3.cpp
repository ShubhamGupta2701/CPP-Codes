#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream out;
    ifstream in;
    string line;
    out.open("Copied_file.txt");
    in.open("NUMBERS.txt");
    if(in && out){
        while(getline(in,line)){
            out<<line<<endl;
        }
        cout<<"Content copied.";
    }
    else{
        cout<<"File can't be opend.";
    }
    return 0;
}