#include<iostream>
#include<string>
using namespace std;
class shape{
    public:
    //protected:   --> for abstract class.
    double height,base;
    shape(){
        height=0;
        base=0;
    }
    /*shape(height_,base_){         -->this is for assigning value using constructor.
        height=height_;
        base=base_;
    }*/
    void get_data(){
        cout<<"\nEnter height and base to compute are :";
        cin>>height>>base;
    }
    virtual void display_area(){   
    }
    //virtual void area() = 0;    --> pure virtual function.
};

class triangle : public shape{
    public:
        void display_area(){
            cout<<"\nArea of Triangle = "<<(height*base)/2;
        }
};
class rectangle : public shape{
    public:
        void display_area(){
            cout<<"\nArea of Rectangle = "<<height*base;
        }
};
int main(){
    shape s;
    triangle t;
    t.get_data();
    t.display_area();
    rectangle r;
    r.get_data();
    r.display_area();
    return 0;
}