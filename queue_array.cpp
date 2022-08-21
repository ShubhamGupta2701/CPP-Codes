#include<iostream>
#include<conio>
using namespace std;

class queue{
	private:
		int front;
		int rear;
		int a[5];
	public:
		queue()
		{
			front = -1;
			rear  =-1;
			for(int i=0;i<5;i++)
			{
				arr[i] = 0;
			}
		}
		bool isEmpty(){
			if(front==-1 && rear ==-1)
				return true;
			else
				return false;
		}
};

int main()
{
	do{
		cout<<"What operation you want to perform "<<endl; 
		cout<<"1. Enqueue()"<<endl;
		cout<<"2. Dequeue()"<<endl;
		cout<<"3. isEmpty()"<<endl;
		cout<<"4. isFull()"<<endl;
		cout<<"5. Count()"<<endl;
		cout<<"6. Display()"<<endl;
		cout<<"7. Clear"<<endl<<endl;
		
		cin>>option;
		switch(option){
			case 0 :
				
			case 1 :
				
			case 2 :
				
			case 3 :
				
			case 4 :
				
			case 5 :
			
		    case 6 :
		    	
		    case 7 :
		    	
		}
	}
}
