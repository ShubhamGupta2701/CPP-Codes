#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    fstream out;
    char ch;
    cout<<"Enter a string and be sure it ends with full stop ('.') : ";
    out.open("new_file.txt",ios::out);
    if(!out){
        cout<<"File couldn't be opened."<<endl;
    }
    while(1){
        cin.get(ch);
        out.put(ch);
        if(ch=='.'){
            break;
        }
    }
    out.close();
    ifstream in;
    int count = 0;
    in.open("new_file.txt",ios::in);
    while(!in.eof()){
        in.get(ch);
        count++;
    }
    cout<<"Size of the string is : "<<count-1;
    in.close();
    return 0;
}