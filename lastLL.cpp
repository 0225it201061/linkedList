#include<iostream>
using namespace std;

struct Node{
	int data;
	Node *next; 
};

void printList(Node *n){
	int count =0;
	while(n!=NULL){
		cout<<n->data<<endl;
		n= n->next;
		count++;
	}
	cout<<"count the number of linkd list in elements"    <<  count<<endl;
}
Node *push(Node *head,int hdata){
	Node *start = new Node();
	start->data= hdata;
	start->next = head;
	head = start;
	return head;
}
int main(){
	Node *head= NULL;
head =	push(head,5);
head=	push(head ,9);
	printList(head);
	
}
