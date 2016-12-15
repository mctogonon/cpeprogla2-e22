#include<iostream>
using namespace std;

struct Node{
	int data;
	Node *next;
};

int main(){
	Node *p, *head, *tail;
	
	//1
	p= new Node;
	p->data=20;
	p->next=NULL;
	head=p;
	tail=p;
	
	//2
	p= new Node;
	p->data = 60;
	p->next = head;
	head=p;
	
	//3
	p=new Node;
	p->data = head->data - tail->data;
	p->next = NULL;
	tail->next=p;
	p=tail;
	
	//4
	p=new Node;
	p->data=head->data;
	p->next=head;
	head=p;
	
	//5
	p=new Node;
	p->data = 35;
	p->next = head->next;
	head->next = p;
	
	//6
	p=head->next;
	delete head;
	head=p;
	
	//10
	tail = head;
	p = head;
	while(tail!=NULL){
		cout << tail->data << "->";
		tail= tail->next;
	}

	cout<<endl;
	
	system("pause");
	
	
}
