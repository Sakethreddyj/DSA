#include<iostream>
using namespace std;
static int heapsize,size,count=0;
int Parent(int i)
{
	return i/2;
}
	
int Left(int i)
{
	return 2*i;
}
	
int Right(int i)
{
	return 2*i+1;
}

void Maxheapify(int a[],int i)
{
	int l=Left(i);
	int r=Right(i);
	int largest;
	if(l<=heapsize && a[l]>a[i])
		largest=l;
	else
		largest=i;
	if(r<=heapsize && a[r]>a[largest])
		largest=r;
		
	if(largest!=i)
	{
		swap(a[i],a[largest]);
		Maxheapify(a,largest);
	}
}
void Build(int a[])
{
	heapsize= size;
	for(int i=heapsize/2;i>=1;i--)
	{
		Maxheapify(a,i);
	}
}
void Heapsort(int a[])
{
	Build(a);
	for(int i=size;i>=2;i--)
	{
		swap(a[1],a[i]);
		heapsize=heapsize-1;
		Maxheapify(a,1);
		count++;
		for(int i=1;i<=size;i++)
		{
			cout<<a[i]<<"\t";
		}
		cout<<endl;
	}
}

int main()
{
	int a[10];
	cout<<"\nEnter size:";
	cin>>size;
	cout<<"\nEnter Array:";
	for(int i=1;i<=size;i++)
	{
		cin>>a[i];
	}
	Heapsort(a);
	cout<<"\nFinal array after sort:";
	/*for(int i=1;i<=size;i++)
	{
		cout<<a[i]<<"\t";
	}*/
	cout<<"\nNumber of swaps:"<<count;
	
	
}
