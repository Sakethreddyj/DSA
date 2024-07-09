#include<iostream>
using namespace std;
class Sort
{
	private:
		int a[10],size;
		
	public:
		Sort()
		{
			//array size
			cout<<"\nEnter array size:";
			cin>>size;
			//array input
			cout<<"\nEnter array elements:";
			for(int i=0;i<size;i++)
			{
				cin>>a[i];
			}
		}
		void bubble();
		void display();
};
void Sort::bubble()
{
	int current=0,walker,sorted=0;
	while(current<=size && sorted==0)
	{
		walker=size-1,sorted=1;
		while(walker>current)
		{
			if(a[walker]<a[walker-1])
			{
				sorted=0;
				swap(a[walker],a[walker-1]);
			}
			walker--;
		}
		current++;
		display(); 
	}
	//cout<<"\nArray after sorting:";
	//display();
}
void Sort::display()
{
	for(int i=0;i<size;i++)
	{
		cout<<a[i]<<"\t";
	}
	cout<<endl;
}

int main()
{
	Sort b;
	b.bubble();
	b.display();
}
