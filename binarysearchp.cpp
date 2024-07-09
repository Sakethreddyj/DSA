#include<iostream>
using namespace std;
int main()
{
	int i,j,size,low,high,mid,a[10],flag=0,search;
	//input array
	cout<<"\nEnter array size:";
	cin>>size;
	cout<<"\nEnter array elements: ";
	for(int i=0;i<size;i++)
	{
		cin>>a[i];
	}
	cout<<"\nElements before sorting: ";
	for(int i=0;i<size;i++)
	{
		cout<<a[i]<<"\t";
	}
	//sort the elements in array
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(a[i]>a[j])
			{
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	cout<<"\nElements after sorting: ";
	for(int i=0;i<size;i++)
	{
		cout<<a[i]<<"\t";
	}
	cout<<"\nEnter search element: ";
	cin>>search;
	low=0,high=size-1;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(search==a[mid])
		{
			flag=1;
			cout<<"\nElement "<<a[mid]<<"found at position: "<<mid+1;
			break;
		}
		else if(search>a[mid])
		{
			low=mid+1;
		}
		else
		{
			high=mid-1;
		}
		
	}
	if(flag==0)
	{
		cout<<"\nElement "<<search<<" not found";
	}
	
}
