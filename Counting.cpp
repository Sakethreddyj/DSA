#include<iostream>
using namespace std;
static int length;
void Counting(int a[],int b[],int k)
{
	int c[10];
	for(int i=0;i<=k;i++)
	{
		c[i]=0;
	}
	for(int j=1;j<=length;j++)
	{
		c[a[j]]=c[a[j]]+1;
	}
	for(int i=2;i<=k;i++)
	{
		c[i]=c[i]+c[i-1];
	}
	for(int j=length;j>=1;j--)
	{
		b[c[a[j]]]=a[j];
		c[a[j]]=c[a[j]]-1;
	}
	/*cout<<"\nFinal array:";
	for(int i=0;i<length;i++)
	{
		cout<<b[i]<<"\t";
	}*/
}
int main()
{
	int a[10],b[10],k;
	cout<<"\nEnter size:";
	cin>>length;
	cout<<"\nEnter range:";
	cin>>k;
	cout<<"\nInput array:";
	for(int i=1;i<=length;i++)
	{
		cin>>a[i];
	}
	/*for(int i=0;i<10;i++)
	{
		b[i]=0;
	}*/
	Counting(a,b,k);
	for(int i=1;i<=length;i++)
	{
		cout<<b[i]<<"\t";
	}	
}
