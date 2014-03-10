#include<iostream>
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


void reverse_norec() {
	
	if(head==tail) return;
	
	node *i=head;
	head = tail;
	tail = i;
	
	node *tolink = NULL;
	do {
		node *r=i->link;
		i->link=tolink;
		tolink=i;
		i=r;
	}while(i!=NULL);
	
}


void rec_reverser(node *tolink , node *current,node *next) {
	current->link=tolink;
	if(next==NULL) return;
	else rec_reverser(current,next,next->link);
}

void reverse_rec() {
	node *i=head;
	head = tail;
	tail = i;
	rec_reverser(NULL,i,i->link);
}



void printl() {
	node *i = head;
	while(i!=NULL) {
		cout<<(i->data)<<" ";
		i=i->link;
	}
	cout<<endl;
}

int main() {
	insert(3);
	insert(13);
	insert(23);
	insert(33);
	insert(43);
	
	printl();
	reverse_norec();
	printl();
	reverse_rec();
	printl();
	return 0;
}
