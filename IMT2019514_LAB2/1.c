//Write a (C) program to input twointegers and print the GCD (Greatest Common Divisor) of the two numbers.Note: If both the input numbers are 0, then the output should be “Invalidinput”.



#include <stdio.h> 

int main(void)
{
	int a,b,n,l,s;
	scanf("%d%d",&a,&b);
	if(a<0)
		a=-a;
	if(b<0)
		b=-b;
	l = (a>b)?a:b;
	s = (a<b)?a:b;	
	if(s!=0 || l!=0)
	{
		while(s!=0){
			n = l%s;
			l = s;
			s = n; 
			}
			printf("%d\n",l);
		}
	
	else if(l==0 && s==0)
	
	printf("Invalid input\n"); 

	
	return 0;
}
