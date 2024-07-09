#include<iostream>
using namespace std;
int Partition(int a[],int lb,int ub)
{
	int start=lb;
	int end=ub;
	int pivot=a[lb];
	while(start<end)
	{
		while(a[start]<=pivot)
		{
			start++;
		}
		while(a[end]>pivot)
		{
			end--;
		}
		
		if(start<end)
		{
			swap(a[start],a[end]);
		}
	}
	swap(a[lb],a[end]);
	return end;
}
int Quick(int a[],int lb,int ub)
{
	if(lb<ub)
	{
		int loc=Partition(a,lb,ub);
		Quick(a,lb,loc-1);
		Quick(a,loc+1,ub);
	} 
	
}
int main()
{
	int a[10];
	int size;
	cout<<"\nEnter size:";
	cin>>size;
	cout<<"\nInput array:";
	for(int i=1;i<=size;i++)
	{
		cin>>a[i];
	}
	Quick(a,1,size);
	cout<<"\nFinal array status:"<<endl;
	for(int i=1;i<=size;i++)
	{
		cout<<a[i]<<"\t";
	}
}
