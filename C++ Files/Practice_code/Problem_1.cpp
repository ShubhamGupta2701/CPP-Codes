#include<iostream>
#include<sstream>
#include<string.h>
using namespace std;

class Student{
    int age;
    string first_name,last_name;
    int standard;
    public:
        void set_age(int _age){
            age = _age;
          
        }
        void set_first_name(string f_name){
            first_name = f_name ;
           
        }
        void set_last_name(string l_name){
            last_name = l_name;
         
        }
        void set_standard(int _stand){
            standard = _stand;
            
        }
        int get_age(){
       
            return age;
        }
        string get_first_name(){
            
            return first_name;
        }
        string get_last_name(){
          
            return last_name;
        }
        int get_standard(){
          
            return standard;
        }
        string to_string(){
            stringstream s;
            s >> age;
            s.str(",");
            s >> first_name;
            s.str(",");
            s >> last_name;
            s.str(",");
            s >> standard;    
            return s.str();    
        }
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}