#include<iostream>
using namespace std;
class Rectangle{
    public:
        float length;
        float width;
    void setlength(float length_){
        length = length_;
    }
    void setwidth(float width_){
        width = width_;
    }
    float perimeter(){
        return 2*(this->length + this->width);
    }
    float area(){
        return this->length*this->width;
    }
    void show(){
        cout<<"Length of the rectangle is : "<<this->length<<endl;
        cout<<"width of the rectangle is : "<<this->width<<endl;
    }
    int sameArea(Rectangle name_){
        if(this->area() == name_.area()){
            return 1;
        }
        else{
            return 0;
        }
    }
};
int main(){
    Rectangle r1,r2;
    r1.setlength(5);
    r1.setwidth(3.5);
    cout<<"perimeter of 1st rectangle is : "<<r1.perimeter()<<endl;
    cout<<"Area of 1st rectangle is : "<<r1.area()<<endl;
    r2.setlength(5);
    r2.setwidth(12.9);
    cout<<"perimeter of 2nd rectangle is: "<<r2.perimeter()<<endl;
    cout<<"Area of 2nd rectangle is : "<<r2.area()<<endl;
    cout<<"checking if same area or not : "<<r1.sameArea(r2)<<endl;
    r1.setlength(15);
    r1.setwidth(6.3);
    cout<<"Now the Perimeter of 1st rectangle is : "<<r1.perimeter()<<endl;
    cout<<"Now the Area of the 1st rectangle is : "<<r1.area()<<endl;
    cout<<"Perimeter of 2nd rectangle is : "<<r2.perimeter()<<endl;
    cout<<"Area of 2nd rectangle is : "<<r2.area()<<endl;
    cout<<"Again checking if area of 2 rectangles are same or not : "<<r1.sameArea(r2)<<endl;
    return 0;
}