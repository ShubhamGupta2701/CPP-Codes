#include<iostream>
using namespace std;
int main(){
    /*pair<int,string> p;
    p = {27,"shubham"};
    cout<<p.first<<" "<<p.second<<endl;
    // return 0;

    //Using with reference operator.
    pair<int,string> &p1 = p;
    p1.first = 19;
    p1.second = "prachi";
    cout<<p.first<<" "<<p1.second<<endl;
    // return 0;
    
    //We can also declare array using pair
    pair<int,int> p2[3];
    p2[0] = {1,2};
    p2[1] = {5,10};
    p2[2] = {19,27};
    for(int i=0;i<3;i++){
        cout<<p2[i].first<<" "<<p2[i].second<<endl;
    }
    swap(p2[0],p2[2]);
    cout<<"Values after swapping"<<endl;
    for(int i=0;i<3;i++){
        cout<<p2[i].first<<" "<<p2[i].second<<endl;
    }*/

    //Taking input form user using pair.
    pair<string,string> P;
    cout<<"Enter your first name: ";
    cin>>P.first;
    cout<<"Enter your last name : ";
    cin>>P.second;
    cout<<"Full name is : "<<P.first<<" "<<P.second<<endl; 


    return 0;
}