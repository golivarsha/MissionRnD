#include <iostream>
using namespace std;
struct node{
	int data;
	node *link;
}*head=NULL,*tail=NULL;
int count;
void insert(int a)
{
if(head==NULL&&tail==NULL){
	
	head=new node();
	head->data=a;
	head->link=NULL;
	tail=head;
	
}else {
		node *r = new node();
		r->data=a;
		r->link=NULL;
		tail->link=r;
		tail=r;
	}
	count++;
}
void del_end(int k){
	node *t=head,*d;
	cout<<count<<" "<<k<<endl;
	if(k<count){
	for(int i=1;i<=count-k;i++){
	   d=t;
	   t=t->link;
     }
     d->link=NULL;
    } 
  else {
	t=head;
	head=NULL;
  }   
      
     while(t!=NULL)
     {
     	node *i=t;
     	t=t->link;
     	delete i;
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
int main()
{
	insert(11);
	insert(8);
	insert(2);
	insert(900);
                   insert(7);
	insert(9);
	printl();
	del_end(3);
	printl();
	return 0;
}


