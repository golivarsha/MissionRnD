#include<stdio.h>
#include<stdlib.h>

int merge(int *a1,int *b1,int m1,int m2,int *c1)
{
   int k=0,i,j;
  for(i=0,j=0;i<m1&&j<m2;)
  {
     if(a1[i]<b1[j])
       c1[k++]=a1[i++];
     else
       c1[k++]=b1[j++];
  }
  if(i<m1)
 for(;i<m1;i++)
  c1[k++]=a1[i];

 if(j<m2)
 for(;j<m2;j++)
  c1[k++]=b1[j];
		}
int main()
 {
 	int n1,n2,i,*a,*b,*c,j,k;
	 float med;
 	printf("enter the size of array 1 and array 2");
 	scanf("%d %d",&n1,&n2);
	a=(int *)malloc(n1*sizeof(int));
	b=(int *)malloc(n2*sizeof(int));
	printf("enter the %d elements of array 1 in sorted order",n1);
          for(i=0;i<n1;i++)
		   scanf("%d",&a[i]);
	printf("enter the %d elements of array 2 in sorted order",n2);
	      for(i=0;i<n2;i++)
		   scanf("%d",&b[i]);
	c=(int *)malloc((n1+n2)*sizeof(int));	   
		   merge(a,b,n1,n2,c);
		med=0.0;
		i=(n1+n2)/2;
		  if((n1+n2)%2==0)
		 med=((c[i]+c[i-1])/2.0);
		else
		med=c[i];
		printf("median:%f",med);
	return 0;
}
  
 
