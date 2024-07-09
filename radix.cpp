#include<iostream>
#include<math.h>
using namespace std;
static int digit,length,range;
void count(int a[],int g[])
{
	cout<<"\nI love u";
	int c[10],b[10];
	for(int i=0;i<length;i++)
		c[i]=0;
	for(int j=1;j<=length;j++)
		c[g[j]]=c[g[j]]+1;
	for(int i=1;i<=range;i++)
		c[i]=c[i]+c[i-1];
	for(int j=length;j>=1;j--)
	{
		b[c[g[j]]]=a[j];
		c[g[j]]=c[g[j]]-1;
	}
	for(int i=1;i<=length;i++)
		a[i]=b[i];
	cout<<"\nfinal array status:";
	for(int i=1;i<=length;i++)
		cout<<a[i]<<"\t";
}
void radix(int a[])
{
	cout<<"\nI love u";
	int g[10];
	for(int i=1;i<=digit;i++)
	{
		for(int j=1;j<=length;j++)
		{
			g[j]=(int(a[j]/pow(10,i-1)))%10;	
		}	
		count(a,g);
		/*cout<<"\npass"<<i<<":";
		for(int x=1;x<=length;x++)
			cout<<a[x]<<"\t";*/
	}	
}
int main()
{
	int A[20],g[20];
	cout<<"Enter no. of digits :";cin>>digit;
	cout<<"Enter the range of numbers :";cin>>range;
	cout<<"Enter no. of elements :";cin>>length;
	cout<<"Enter the elements one by one :";
	for(int i=1;i<=length;i++)
		cin>>A[i];
	radix(A);
	
}
