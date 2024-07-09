#include<iostream>
using namespace std;
class Stack
{
	private:
		int arr[10];
		int size;
		int top;
	public:
		Stack()
		{
			cout<<"\nEnter size";
			cin>>size;
			top=-1;
		}
		~Stack(){}
		void push(int);
		void pop();
		void display();
		void peek();
		void isfull();
		void isempty();
};
void Stack::push(int x)
{
	if(top<size-1)
	{
		arr[++top]=x;
	}
	else
	{
		cout<<"\nStack overflow";
	}
}
void Stack::pop()
{
	if(top>-1)
	{
		int y=arr[top--];
		cout<<y<<"\nElement is deleted";
	}
	else
	{
		cout<<"\nStack underflow";
	}
}
void Stack::peek()
{
	if(top>-1)
	{
		int pos;
		cout<<"\nEnter position:";
		cin>>pos;
		cout<<"\nElement present at"<<pos<<"position is"<<arr[top-pos+1];
	}
	else
	{
		cout<<"\nStack is empty";
	}
}
void Stack::display()
{
	if(top>-1)
	{
		for(int i=0;i<top;i++)
		{
			cout<<arr[i];
		}
	}
	else
	{
		cout<<"\nStack is empty";
	}
}
void Stack::isfull()
{
	if(top==size-1)
	{
		cout<<"\nStack is full";
	}
	else
	{
		cout<<"\nStack is not full";
	}
}
void Stack::isempty()
{
	if(top<-1)
	{
		cout<<"\nStack is empty";
	}
	else
	{
		cout<<"\nStack is not empty";
	}
}
int main()
{
	Stack s;
	int op;
	do
	{
		
		cout<<"\n1.push\t2.pop\t3.display\t4.peek\t5.isfull\t6.isempty\t7.exit";
		cout<<"\nEnter an option:";
		cin>>op;
		switch(op)
		{
			case 1:
			int x;
			cout<<"\nEnter Element:";
			cin>>x;
			s.push(x);
			break;
			case 2:
			s.pop();
			break;
			case 3:
			s.display();
			break;
			case 4:
			s.peek();
			break;
			case 5:
			s.isfull();
			break;
			case 6:
			s.isempty();
			break;
			case 7:
			exit(7);
			break;
		}
	}while(op!=0);
}













