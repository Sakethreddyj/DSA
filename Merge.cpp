#include<iostream>
using namespace std;
void Merge(int a[],int p,int q,int r)
{
	int n1=q-p+1;
	int n2=r-q;
	int L[n1],R[n2];
	for(int i=1;i<=n1;i++)
		L[i]=a[p+i-1];
	for(int j=1;j<=n2;j++)
		R[j]=a[q+j];
	L[n1+1]=999999;
	R[n2+1]=999999;
	int i=1;
	int j=1;
	for(int k=p;k<=r;k++)
	{	 
		if(L[i]<=R[j])
		{	
			a[k]=L[i];
			i++;
		}
		else
		{	
			a[k]=R[j];
			j++;
		}
	}	
}
void MergeSort(int a[],int p,int r)
{
	if(p<r)
	{	
		int q=(p+r)/2;
		MergeSort(a,p,q);
		MergeSort(a,q+1,r);
		Merge(a,p,q,r);
	}
		
}
int main()
{
	int a[10];
	int length; 
	cout<<"\nEnter Length:";
	cin>>length;
	cout<<"\nInput array:";
	for(int i=1;i<=length;i++)
		cin>>a[i];
	MergeSort(a,1,length);
	cout<<"\nFinal Array:";
	for(int i=1;i<=length;i++)
		cout<<a[i]<<"\t";
}
