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
		head->link=NULL;
		tail=head;
	}
	else {
		node *r = new node();
		r->data=a;
		r->link=NULL;
		tail->link=r;
		tail=r;
	}
	
}

void printl() {
	node *i = head;
	while(i!=NULL) {
		cout<<(i->data)<<" ";
		i=i->link;
	}
	cout<<endl;
}

void del_eat(int value) {
	if(head==NULL) return;
	
	if(head->data == value) {
		node *r = head;
		head=head->link;
		delete r;
	} else {
		node *i=head;
		if(i->link==NULL) return;
		while(i->link->data!=value ) {
			i=i->link;
			if(i->link==NULL) return;
		}
		if(i->link->link==NULL) {
			node *r=i->link;
			i->link=NULL;
			tail=i;
			delete r;
		} else {
			node *r=i->link;
			i->link=i->link->link;
			delete r;
		}
	}
}  

int main() {
	// your code goes here
	insert(5);
	insert(1);
	insert(3);
	insert(4);
	insert(2);
	printl();
	del_eat(5);
	printl();
	del_eat(2);
	printl();
	del_eat(25);
	printl();
	del_eat(3);
	printl();
	
	return 0;
}
