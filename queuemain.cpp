#include<iostream>
using namespace std;
class Queue
{
	private:
		int arr[10];
		int size;
		int front,rear;
	public:
		Queue()
		{
			cout<<"\nEnter size:";
			cin>>size;
			front=rear=-1;
		}
		~Queue(){}
		void enqueue(int);
		void dequeue();
		void display();
		void frontele();
		void rearele();
		void count();
		void isfull();
		void isempty();
};
void Queue::enqueue(int x)
{
	if(rear<size-1)
	{
		arr[++rear]=x;
		if(front==-1)
		front++;
	}
	else
	{
		cout<<"\nQueue overflow";
	}
}
void Queue::dequeue()
{
	if(front>-1)
	{
		int y=arr[front];
		cout<<"\nElement "<<y<<" is deleted";
		if(front==rear)
		{
			front=rear=-1;
		}
		else
		{
			front++;
		}
	}
}
void Queue::display() 
{
	cout<<"\nelements are";
	if(front>-1)
	{
		for(int i=front;i<=rear;i++)
		cout<<"\t"<<arr[i];
	}
	else
	{
		cout<<"\nQueue is empty";
	}
}
void Queue::count()
{
	int count=0;
	if(front>-1)
	{
		for(int i=front;i<=rear;i++)
		{
			count++;
		}
		cout<<"\nnumber of elements:"<<count;
	}
	else
	{
		cout<<"\nQueue is empty";
	}
}
void Queue::frontele()
{
	if(front>-1)
	{
		cout<<"\nFront element:"<<arr[front];
	}
	else
	{
		cout<<"\nQueue is empty";
	}
	
}
void Queue::rearele()
{
	if(front>-1)
	{
		cout<<"\nRear element:"<<arr[rear];
	}
	else
	{
		cout<<"\nQueue is empty";
	}
}
void Queue::isfull()
{
	if(front==0 && rear==size-1)
	{
		cout<<"\nqueue is full";
	}
	else
	{
		cout<<"\nQueue is not full";
	}
}
void Queue::isempty()
{
	if(front==-1)
	{
		cout<<"\nQueue is empty";
	}
	else
	{
		cout<<"\nQueue is not empty";
	}
}
int main()
{
	int op;
	Queue s;
	do
	{
		cout<<"\n1.enqueue\t2.dequeue\t3.display\t4.frontele\t5.rearele\t6.isfull\t7.isempty\t8.count\t9.exit";
		cout<<"\nEnter option";
		cin>>op;
		switch(op)
		{
			case 1:
				int x;
				cout<<"\nEnter element";
				cin>>x;
				s.enqueue(x);
				break;
			case 2:
				s.dequeue();
				break;
			case 3:
				s.display();
				break;
			case 4:
				s.frontele();
				break;
			case 5:
				s.rearele();
				break;
			case 6:
				s.isfull();
				break;
			case 7:
				s.isempty();
				break;
			case 8:
				s.count();
				break;
			case 9:
				exit(9);
				break;
		}
	}while(op);
}


















