#include<iostream>
#include<string>
using namespace std;
class matrix{
    public:
        int i,j;
        int** arr;
        matrix(int i,int j){
            int** arr = new int*[i];
            for(int a=0;a<i;++i){
                arr[a] = new int[j];
            }
        }
        void getdata(int row,int col,int val){
            arr[row][col] = val;
        }
        void show(){
            for(int row=0;row<i;row++){
                for(int col=0;col<j;col++){
                    cout<<arr[row][col]<<" ";
                }
                cout<<endl;
            }
        }
        void multiply(matrix m){
            for(int r=0;r<i;r++){
                for(int c=0;c<j;c++){
                    cout<<(this->arr[r][c])*(m.arr[r][c])<<" ";
                }
                cout<<endl;
            }
        }
};

int main(){
    matrix m1(2,2);
    matrix m2(2,2);
    m1.getdata(0,0,1);
    m1.getdata(0,1,2);
    m1.getdata(1,0,3);
    m1.getdata(1,1,4);
    m1.show();
    m2.getdata(0,0,1);
    m2.getdata(0,1,2);
    m2.getdata(1,0,3);
    m2.getdata(1,1,4);
    m2.show();
    m1.multiply(m2);
    return 0;
}