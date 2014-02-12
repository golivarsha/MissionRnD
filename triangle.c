#include<stdio.h>
#include<math.h>
void check(float a,float b,float c)
 
{
		         if((a+b>c)||(b+c>a)||(a+c>b)) 
				{
					printf("s it forms a triangle");
						printf("Length of side AB is = %f",c);
                    printf("Length of side BC is = %f",a);
                 printf("Length of side CA is = %f",b);
				 if((a==b)&&(b==c))
					 printf("its a eqi lateral triangle");
			    else if((a==b)||(b==c)||(c==a))
					 printf("triangle is isosceles");
			    else if((a==sqrt((b*b)+(c*c)))||(b==sqrt((a*a)+(c*c)))||(c==sqrt((b*b)+(a*a))))
					printf("its a ri8 triangle");
				else
					printf("its a scalene triangle");

				}
 
}
 
int main()
{
	int x[3],y[3];
	int i;
	float a,b,c;
	printf("enter the coordinates of triangle");
	for(i=0;i<3;i++)
	{ 
		printf("\n enter the (x,y) coordinates of vertex %d ",i+1);
		scanf("%d %d",&x[i],&y[i]);
    	printf("%d %d\n",x[i],y[i]);
	}
	if(((x[0]==x[1])&&(x[1]==x[2]))||((y[0]==y[1])&&(y[1]==y[2])))
		printf("no triangle formed");
	else		{
 
			  a = sqrt(   (  (x[2]-x[1])*(x[2]-x[1])  )+( (y[2]-y[1])*(y[2]-y[1])  ) );
			  b = sqrt(   (  (x[0]-x[2])*(x[0]-x[2])  )+( (y[0]-y[2])*(y[0]-y[2])  ) );
              c = sqrt(   (  (x[0]-x[1])*(x[0]-x[1])  )+( (y[0]-y[1])*(y[0]-y[1])  ) );
              printf("%f %f %f\n",a,b,c);
			  check(a,b,c);
	}
return 0;
}
