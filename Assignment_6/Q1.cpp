#include<iostream>
#include<string>
using namespace std;
class Publication{
    public:
        string title;
        float price;
        void put_data(){
            cout<<"Title is : "<<title<<endl;
            cout<<"Price is : "<<price<<endl;
        }
};
class Book:public Publication{
    public:
        int page_count;
        void get_data(){
            cout<<"Enter page count : ";
            cin>>page_count;
        }
        void put_data(){
            cout<<"page count is : "<<page_count<<endl;
        }
};
class Tape:public Publication{
    public:
        float t_i_m;
        void get_data(){
            cout<<"Enter time in minutes : ";
            cin>>t_i_m;
        }
        void put_data(){
            cout<<"Time in minutes is : "<<t_i_m<<endl;
        }
};
int main(){
    Publication p;
    p.title = "my life";
    p.price = 999;
    Book b;
    b.get_data();
    Tape t;
    t.get_data();
    p.put_data();
    b.put_data();
    t.put_data();
    return 0;
}