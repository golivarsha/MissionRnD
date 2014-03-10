#include <iostream>
using namespace std;
struct node{
	int data;
	node *prev,*next;
	
}*head=NULL,*tail=NULL;
int count;
void insert(int a)
{
if(head==NULL&&tail==NULL){
	
	head=new node();
	head->prev=NULL;
	head->data=a;
	head->next=NULL;
	tail=head;
	
}else {
		node *r = new node();
		r->data=a;
		r->prev=tail;
		r->next=NULL;
		tail->next=r;
		tail=r;
	}
	count++;
}
void dispmid(){
   node *t=head,*r;     		
   int j,mid,k;
   j=count%2;
        mid=count/2;
      	for(k=1;k<=mid;k++){
      		r=t;
      		t=t->next;
      	}
      	if(j==0)
       cout<<r->data<<" "<<t->data;
      else{
      	cout<<t->data;
      }
  }
 void printl() {
	node *i = head;
	while(i!=NULL) {
		cout<<(i->data)<<" ";
		i=i->next;
	}
	cout<<endl;
}


int main()
{
	insert(3);
	insert(8);
	insert(0);
	insert(1);
	insert(9);
	printl();
	dispmid();
	return 0;
}

