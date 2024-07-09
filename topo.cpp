#include<iostream>
#define max 50
using namespace std;
int pi[max],nv,ne,dis[max],fin[max];
int adj[max][max];
static int time;
char c[max];
struct node
{
	int v;
	node *next;
}*head=NULL;
void insert(int v)
{
	struct node *temp;
	temp=new node;
	temp->v=v;
	temp->next=NULL;
	if(head!=NULL)
		temp->next=head;
	head=temp;
}
void toposort()
{
	struct node *temp;
	cout<<"\nLinear ordering:";
	for(temp=head;temp!=NULL;temp=temp->next)
		cout<<temp->v<<"->";
	cout<<"NULL";
}
void dfsvisit(int u)
{
	int v;
	cout<<u<<"\t";
	time=time+1;
	dis[u]=time;
	c[u]='g';
	for(int v=1;v<=nv;v++)
	{
		if(adj[u][v])
		{
			if(c[v]=='w')
			{
				pi[u]=u;
				dfsvisit(v);
			}
		}
	}
	c[u]='b';
	time=time+1;
	fin[u]=time;
	insert(u);
}
void dfs()
{
	for(int u=1;u<=nv;u++)
	{
		c[u]='w';
		pi[u]=-1;
	}
	time=0;
	for(int j=1;j<=nv;j++)
	{
		if(c[j]=='w')
		{
			dfsvisit(j);
		}
	}
}
int main()
{
	int f,t;
	cout<<"\nTopological sort";
	cout<<"\nNumber of vertices and edges";
	cin>>nv>>ne;
	for(int i=1;i<=ne;i++)
	{
		cout<<"Edge "<<i<<endl;
		cout<<"From and To"<<endl;
		cin>>f>>t;
		adj[f][t]=1;
	}
	cout<<"\nDFS";
	dfs();
	cout<<"\nFinish and discovery time";
	for(int i=1;i<=nv;i++)
		cout<<"vertex "<<i<<" : "<<dis[i]<<"/"<<fin[i]<<endl;
	toposort();
	return 0;
}
