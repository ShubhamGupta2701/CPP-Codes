#include<iostream>
using namespace std;
class Distance{
    public:
        int feet;
        float inches;
    void set(int feet_ , float inches_){
        feet = feet_;
        inches = inches_;
    }
    void disp(){
        cout<<"Distance is : "<<this->feet<<" feet and "<<this->inches<<" inches"<<endl;
    }
    Distance add(Distance D){
        Distance t;
	    t.feet =0;
        t.inches=this->inches + D.inches;
	    if(t.inches>=12.0){
	    	t.inches-=12.0;
		    t.feet++;
	    }
	    t.feet +=this->feet + D.feet;
	    return t;
    }
};
int main(){
    Distance d1,d2,d3;
    d1.set(5,2.1);
    d2.set(3,1.1);
    d1.disp();
    d2.disp();
    d3 = d1.add(d2);
    d3.disp();
    return 0;
}