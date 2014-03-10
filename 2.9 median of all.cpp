#include <iostream>
using namespace std;
struct node{
	int data;
	node *next;
	
}*head=NULL,*tail=NULL;
int count;
void insert(int a)
{
if(head==NULL&&tail==NULL){
	
	head=new node();
	head->data=a;
	head->next=NULL;
	tail=head;
	
}else {
		node *r = new node();
		r->data=a;
		r->next=NULL;
		tail->next=r;
		tail=r;
	}
	count++;
}
void dispmid(){
   node *t=head,*r;     		
   int j,mid,median,k;
   j=count%2;
        mid=count/2;
      	for(k=1;k<=mid;k++){
      		r=t;
      		t=t->next;
      	}
      	if(j==0){
       median=(r->data+t->data)/2;
       cout<<median;
      }
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
	insert(5);
	insert(10);
	insert(12);
	insert(90);
	printl();
	dispmid();
	return 0;
}

