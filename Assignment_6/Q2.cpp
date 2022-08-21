#include<iostream>
#include<math.h>
using namespace std;
class student{
    public: 
        int roll_no;
        string name;
    public:
        void put_data(){
            cout<<"Name of the student is : "<<name<<endl;
            cout<<"Roll no. of the student is : "<<roll_no<<endl;
        }
};
class exam:public student{
    public:
        float sub[5];
        float t;
    public:
        void get_data(float sub_1_,float sub_2_,float sub_3_,float sub_4_,float sub_5_){
            sub[0] = sub_1_;
            sub[1] = sub_2_;
            sub[2] = sub_3_;
            sub[3] = sub_4_;
            sub[4] = sub_5_;
        }
        void put_data(){
            cout<<"Marks of subject 1 : "<<sub[0]<<endl;
            cout<<"Marks of subject 2 : "<<sub[1]<<endl;
            cout<<"Marks of subject 3 : "<<sub[2]<<endl;
            cout<<"Marks of subject 4 : "<<sub[3]<<endl;
            cout<<"Marks of subject 5 : "<<sub[4]<<endl;
        }
        float get_total_marks(){
            for(int i=0;i<5;i++){
                t = t+sub[i];
            }
            return t;
        }
        float get_avg(){
            return t/5;
        }
};
class result:public exam{
    public:
        float total;
        float avg ;
};
int main(){
    student s1;
    exam e1;
    result r1;
    s1.name = "shubham gupta";
    s1.roll_no = 202101044;
    e1.get_data(20,10,44,16,10);
    s1.put_data();
    e1.put_data();
    cout<<"Total number got by student is : "<<e1.get_total_marks()<<endl;
    cout<<"Average got by student is : "<<e1.get_avg()<<endl;
    return 0;
}
