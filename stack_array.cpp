#include<iostream>
#include<string>
using namespace std;
class stack{
	private:
		int top;
		int arr[6];
		
	public:
		stack()
		{
			top = -1;
			for(int i=0;i<6;i++)
			{
				arr[i]=0;
			}
		}
		bool isEmpty()
		{
			if(top==-1)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		bool isFull()
		{
			if(top==5)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		void push(int a){
			if(isFull())
			{
				cout<<"Stack Overflow"<<endl;
			}
			else
			{
				top++;
				arr[top] = a;
			}
		}
		int pop(){
			if(isEmpty()){
				cout<<"stacj underflow";
				return 0;
			}
			else{
				int popvalue = arr[top];
				arr[top]=0;
				top--;
				return popvalue;
			}
		}
		int count(){
			return(top+1);
		}
		
		int peek(int pos){
			if(isEmpty()){
				cout<<"Stack Underflow";
			}
			else{
				return arr[pos];
			}
		}
		
		void change(int pos,int value){
			arr[pos]=value;
			cout<<"Value is changed at location "<<pos<<endl;
		}
		void display(){
			cout<<"All values in the stack are "<<endl;
			for(int i=6;i>0;i++){
				cout<<arr[i]<<endl;
			}
		}
};

int main()
{
	stack s1;
	int option,position,value;
	
	do{
		cout<<"What operation you want to perform ? Selct a option number  and Enter 0 to exit."<<endl;
		cout<<"1. Push()"<<endl;
		cout<<"2. pop()"<<endl;
		cout<<"3. isEmpty()"<<endl;
		cout<<"4. isFull()"<<endl;
		cout<<"5. peek()"<<endl;
		cout<<"6. count()"<<endl;
		cout<<"7. change()"<<endl;
		cout<<"8. display()"<<endl;
		cout<<"9. Clear screen"<<endl<<endl;
		cin>>option;
		switch(option){
			case 0:
				break;
			case 1:
				cout<<"Enter an item to push in stack "<<endl;
				cin>>value;
				s1.push(value);
				break;
			case 2:
				cout<<"Pop function called -- poped value : "<<s1.pop()<<endl;
				break;
			case 3:
				if(s1.isEmpty())
					cout<<"Stack is empty"<<endl;
				else
					cout<<"Stack is not empty "<<endl;
				break;
			case 4:
				if(s1.isFull())
					cout<<"Stack is full"<<endl;
				else
					cout<<"Stack is not full"<<endl;
				break;
			case 5:
				cout<<"Enter position of item you want to peek : "<<endl;
				cin>>position;
				cout<<"The value at position "<<"position is"<<s1.peek(position)<<endl;
				break;
			case 6:
				cout<<"Count function called -- Number of items present in the stack are : "<<s1.count()<<endl;
				break;
			case 7:
				cout<<"Change funtion called - "<<endl;
				cout<<"Enter the positon whose value you want to change  : "<<endl;
				cin>>position;
				cout<<endl;
				cout<<"Enter value of item you want to change : "<<endl;
				cin>>value;
				s1.change(position,value);
				break;
			case 8:
				cout<<"Display funtion called : "<<endl;
				s1.display();
				break;
			case 9:
				system("cls");
				break;
			default:
				cout<<"Enter proper option number "<<endl;
				
		}
	}while(option!=0);
	
	return 0;
}
