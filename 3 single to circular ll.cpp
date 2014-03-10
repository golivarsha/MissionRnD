#include<iostream>
using namespace std;
struct node
{
 
	
    int data;

     struct node *link;
    
}*head=NULL,*temp,*p;
 void add(int d){
 	if(head==NULL){
 		head=new node();
 		head->data=d;
 		head->link=NULL;
 		p=head;
 		
 	}
 	else{
	    temp=new node();
 		temp->data=d;
 		temp->link=NULL;
 		p->link=temp;
 		p=temp;
 				
 	}
 	
 }
 void circular() {
 	p=head;
 	while((p->link)!=NULL){
 	 cout<<p->data<<"--->";
 	 p=p->link;
  }
 	  cout<<p->data<<"--->";
 	 
	  p->link=head;
	 p=head;
 	 cout<<p->data;
 
}
int main() {
	int i,k,num;
  		add(3);
  		add(6);
  		add(12);

  circular();
	
	
	return 0;
}
	 
