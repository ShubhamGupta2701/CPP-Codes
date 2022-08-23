#include<iostream>
using namespace std;
int length(char name[]){
    int len = 0;
    for(int i=0;name[i] != '\0';i++){
        len++;
    }
    return len;
}
void reverse_array(char name[]){
    for(int i=length(name)-1;i>=0;i--){
        cout<<name[i];
    }
}
int main(){
    char name[30];
    cout<<"Enter yoour name : ";
    cin.getline(name,30);
    reverse_array(name);
    return 0;
}