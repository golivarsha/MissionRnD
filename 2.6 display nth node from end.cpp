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
void printnth(int k){
	node *t=head,*d;
	cout<<count<<" "<<k<<endl;
	if(k<count)
	for(int i=1;i<=count-k;i++)
	   t=t->link;
     
  else {
	t=head;
	head=NULL;
  }   
      
     	cout<<t->data;
    
     
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
	insert(5);
	insert(89);
	insert(90);
	insert(1);
	insert(9);
	printl();
	printnth(5);
	return 0;
}


