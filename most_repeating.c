// most repeating.cpp 

#include<stdio.h>
#include<conio.h>
#include<malloc.h>
int main()
{

	int *a,n,i,b[100],max=-1,k=0;
	for(i=0;i<100;i++)
		b[i]=0;
	printf("enter no of numbers to b entered");
	scanf_s("%d",&n);
	a=(int *)malloc(n*sizeof(int));
	printf("enter %d values",n);
	 for(i=0;i<n;i++)
	 {
		scanf_s("%d",&a[i]);
                 		 b[a[i]]++;
                         if(max<b[a[i]])
	              {
		max=b[a[i]];//ocurences no.
	                    k=a[i];//max element
	                 }
	 }
	 printf("the max no of occurences is %d",max);
				
	  printf("the nos are");
	  for(i=0;i<100;i++)//for the numbers wich repeat the same no.of times as the max repititions
		  {
			  if(b[i]==max)
			  {
                  			 printf("%d \n",i);
			  }
		  } 
		  _getch();

	return 0;
}
