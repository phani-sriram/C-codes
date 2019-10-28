//Binary Search
// Write a (C)program  to  input  ten  integers  in  sorted  order  and  store  them  in  an  array.Input  a  numberxto  search.   Perform  binary  search  to  findxin  your  listof  numbers.   Output  of  your  program  should  be  “1”  ifxis  found  in  yourlist, else output “0”.  Also output the number of comparisons your programmakes while searching.

#include <stdio.h>
int main(void)
{
	int lower,upper,mean; /* variable declaration*/
	int arr[10];
	int x;
	int count;
	count = 0;
	for(int i = 0;i<10;i++)/*array input*/
	{
		scanf("%d,",&arr[i]);
	}
	scanf("%d",&x);
	lower = 0;/*defining variables*/
	upper = 9;
	while(lower <= upper)
	{
		count++;/*number of comparisons*/
		mean = (lower+upper)/2;
		if(arr[mean]<x)
		{
			lower = mean + 1;/*if x is in right half redefining lower limit of array*/
		}
		else if(arr[mean]>x)
		{
			upper = mean - 1;/*if x is in left half redefining upper limit of array*/
		}
		else if(arr[mean] == x)/*if x is middle element*/
		{
			break;
		}
	}
	if(arr[mean] == x)/*after using binary search the final location of x will be arr[mean] if element is in the array*/ 
		printf("1 %d",count);
	else
		printf("0 %d",count);
	return 0;
}

