// Write a (C) program to input apositive integer and print the number of prime numbers less than or equal tothe input number.Note: If the input number is ≤ 1, then the output shouldbe 0.



#include <stdio.h>
int main(void)
{
	int n,i,k,c,x,d,m;
	scanf("%d",&n);
	if(n<=1)
	{
		printf("0");
		return 0;
	}
	int arr[n+1];
	for(int z=0;z<=n;z++)
		arr[z]=z;
	x = 2;
	k = 2;
      	arr[1]=0;
	while(x<=n)
	{
		if(arr[x]!=0)
		{
			while(k*x<=n)
			{
				arr[k*x]=0;
		
				k=k+1;
			}

		}
			k=2;
			x = x+1;
	}
	x=2;
	c=0;
        while(x<=n)
	{
		if(arr[x] != 0)
		{
			c++;
		}
	x++;
	}
	printf("%d",c);
	return 0;
}

