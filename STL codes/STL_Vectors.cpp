#include<bits/stdc++.h>
using namespace std;

// Vector sixe is dynamic in nature.
void display(vector<int> v){ //Always try to pass vector suing reference opertor to save from o(n) complexity.
    cout<<"Size of the vector is : "<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
//We can predefine the size of the vector but we can easily stor values more then predefined value.
int main(){
    vector<int> v;
    int n;
    cout<<"Enter how many elements you want to store in vector : ";
    cin>>n;
    for(int i=0;i<n;i++){
        int ele;
        cout<<"Enter "<<n<<" element : ";
        cin>>ele;
        v.push_back(ele); //push element at the end of the vector.
        display(v); // show the entry of every element in for loop.
    }
    v.pop_back(); // pop the last element of the vector.
    display(v);

    // we can copy the whole vector into another vector.
    vector<int> v1 = v;
    v1.push_back(27);
    vector<int> &v2 = v1;
    v2.push_back(99);
    display(v1);
    display(v2);
    return 0;
}

