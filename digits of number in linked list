paste ur code here.....then commit using clicking down button#include <iostream>
using namespace std;
struct node{
	int data;
	node *link;
    }*head=NULL,*temp,*p;
void addfirst(int d){
	head=new node();
	if(head==NULL){
		head->data=d;
		head->link=NULL;
		p=head;
			}
	else{
		temp=new node();
		temp->data=d;
		temp->link=p;
		p=temp;
	}
}
void printll(){
	while((temp->link)!=NULL)
			
	{
			
	cout<<temp->data<<"--->";
					
	temp=temp->link;
			
	}
				
	cout<<temp->data;
		
}
 


int main() {
	int num=1;
	int i=200;
	
	while(i)
	
	{
		
		num=i%10;
		
		addfirst(num);
		
		i=i/10;
	
	 }
	
	 	
	printll();
 
	return 0;
}
