#include<iostream>
using namespace std;
int count_char(char name[]){
    int count =0;
    for(int i=0;name[i] != '\0';i++){
        count++;
    }
    return count;
}
int main(){
    char name[20];
    // cin>>name;    // take only first word before any space or white space characters.
    cin.getline(name,20);   // Take spaces ,tabs etc
    cout<<"Length of character array is : "<<count_char(name);
    return 0;
}