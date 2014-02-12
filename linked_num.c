#include<stdio.h>

#include<math.h>

struct node
{
 
	
    int data;

     struct node *link;
    
};

struct node *head=NULL,*temp,*p;
 
 
     
  void addfirst(int d)
		
{

	if(head==NULL)
			
     	{
				
		head=malloc(sizeof(struct node));
					head->data=d;
						head->link=NULL;
						p=head;
			
	}
			
	else
	
	{
		temp=malloc(sizeof(struct node));
					temp->data=d;
			
		temp->link=p;
			
		p=temp;
			
	}
		
}
		
void orderprint()
		
{

	temp=p;
			
	while((temp->link)!=NULL)
			
	{
			
	printf("%d--->",temp->data);
					
	temp=temp->link;
			
	}
				
	printf("%d",temp->data);
		
}
 

 
int main()

{

	
      	ind t i,num;

	num=1;
	
	printf("enter the number");
	scanf("%d",&i) ;
	while(i)
	
	{
		
		num=i%10;
		
		addfirst(num);
		
		i=i/10;
	
	 }
	 
	printf("the elements are");
	 	
	orderprint();
 
 
	 return 0;

} 
