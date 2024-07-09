#include<bits/stdc++.h>
using namespace std;
class Node{
	public:
	int data;
	Node* next;
	public:
	Node(int d){
		data=d;
		next=NULL;
	}
};

void print(Node* head){
	Node* temp=head;
	while(temp!=NULL){
		cout<<temp->data;
		temp=temp->next;
		if(temp!=NULL){
		cout<<"->";
		}
	}
	
}

Node* insertNode(int n,Node* head){
	Node* nn=new Node(n);
	nn->next=head;
	head=nn;
	return head;
}


int main()
{
	int n;
	Node* head=NULL;
	while(true){
		cin>>n;
		if(n==0) break;
		head=insertNode(n,head);
		print(head);
	}
}
