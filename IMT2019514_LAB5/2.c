//Selection Sort
//Write a (C) program to input comma sepa-rated 20 integers and store them in an array, use a Selection sort function tosort the integers in increasing order.  Print the sorted numbers, also output the number of swaps and comparisons while performing the search in a newline.

#include <stdio.h>
void selsort(long long int array[])
{
	int comparisons = 0,swapcount = 0;//comparisons and swaps initialization
	for(int i = 0;i<19;i++)
	{
		int minimum;//minimum index is a variable
		minimum = i;//initialized to i
		int j;
		for(j = i+1;j<20;j++)
		{
			if(array[minimum]>array[j])
			{
				minimum = j;//if we find a element less than current minimum the minimum index gets updated
			}
			comparisons++;
		}
		long long int temp;
		temp = array[i];//using temp variables to swap the elements
		array[i] = array[minimum];
		array[minimum] = temp;
		swapcount+=1;//swapcount increases
	}
	for(int i = 0;i<20;i++)
	{
		printf("%lld ",array[i]);//printing arrays
	}
	printf("\n%d %d",swapcount,comparisons);//printing swaps and comparisons
}
int main()
{
	long long int array[20];
	for(int i = 0;i<20;i++)//array inputting using loops 
	{
		scanf("%lld,",&array[i]);
	}
	selsort(array);//runing the function
	return 0;
}



