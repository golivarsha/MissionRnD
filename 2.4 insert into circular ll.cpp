#include <iostream>
using namespace std;

struct node {
	int data;
	node* link;
	}*head=NULL,*tail=NULL;
	
void insert(int a) {
	
	if(head==NULL && tail==NULL) {
		head = new node();
		head->data=a;
		head->link=head;
		tail=head;
	} 
	else if(a>=(tail->data)) {
		node *r = new node();
		r->data=a;
		r->link=head;
		tail->link=r;
		tail=r;
	} else if(a <= head->data) {
		node *r = new node();
		r->data=a;
		r->link=head;
		tail->link=r;
		head=r;
	} else {
		node *i = head;
		while( (i->link->data) < a)
			i=i->link;
			
		node *r = new node();
		r->data = a;
		r->link=i->link;
		i->link=r;
	}
	
}


void printl() {
	node *i = head;
	do {
		cout<<(i->data)<<" ";
		i=i->link;
	}while(i!=head);
	cout<<endl;
}

int main() {
	insert(5);
	insert(1);
	insert(3);
	insert(4);
	insert(2);
	printl();
	return 0;

}
