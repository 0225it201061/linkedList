#include<iostream>
#include <bits\stdc++.h>
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
void fgh(Node *head)	{
	Node *curr =head;
	while(curr!=NULL){
			cout<<curr->data;
	curr = curr->next;
	}

	
}
void push(Node **head_ref,int hdata){
	Node *start = new Node();
	start->data= hdata;
	start->next = *head_ref;
	*head_ref = start;


}
void insertAfter(Node*prev_node,int newData){
	Node *newNode = new Node();
	newNode->data =  newData;
	newNode ->next = prev_node->next;
	prev_node->next =newNode;
	
}

void append(Node **head_ref,int newData){
	Node *newNode = new Node();
	newNode->data = newData;
	newNode->next=NULL;
	
	Node *last = *head_ref;
	
	if(*head_ref == NULL){
		*head_ref = newNode;
		return;
	}
	while(last->next!=NULL){
		last = last->next;
		
	}
	last->next = newNode;
	return;
}
void del(Node **head_ref,int key)
{
	Node *prev,*temp;
	
	temp = *head_ref;
	
	if(temp!=NULL && temp->data==key){
		*head_ref = temp->next;
		free(temp);
		return;
	}
	
	
	while(temp!=NULL && temp->data!=key){
		prev =temp;
		temp = temp->next;
		
	}
	
	if(temp==NULL) return;
	
	prev->next = temp->next;
	free(temp);
	
	}	
	


int main(){
Node *head= NULL;
push(&head,83);
push(&head,23);

push(&head,70);
push(&head,25);
push(&head,69);
push(&head,75);
push(&head,85);
push(&head,97);
printList(head);
insertAfter(head->next,80);
printList(head);
append(&head,78);
printList(head);

fgh(head);
printList(head);

del(&head,23);
printList(head);
}
