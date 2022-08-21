#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class Student{
  public:
    int number;
    string name;
  public:
    Student(int n, string s){
        number = n;
        name = s;
    }
    void set_up(ofstream& of);
    void load(ifstream& in);
};
void Student::set_up(ofstream& of){
    of.write((char*)&number,sizeof(number));
    of.write((char*)&name,sizeof(name));
}
void Student::load(ifstream& in){
    in.read((char*)&number,sizeof(number));
    in.read((char*)&name,sizeof(name));
    cout<<number<<endl;
    cout<<name<<endl;
}
int main(){
  Student me(11321,"Myself");
  ofstream myfile;
  myfile.open("silly.txt", ios::binary | ios::out);
  me.set_up(myfile);
  myfile.close();
  ifstream file;
  file.open("silly.txt", ios::in | ios::binary);
  me.load(file);
  file.close();
  return(0);
}

