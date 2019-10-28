//Merge Sort
//Write a (C) program to inputncomma sepa-rated integers and store them in an array, use a Merge sort function to sortthe integers in increasing order.  The first line of input isnand the next line contains n comma separated integers.It must use merge function to sort two arrays.Print the sorted numbers and also print the number of times merge function is called. 


#include <stdio.h>
int mergecount;
void merge( long int array[],int lower,int mean,int upper)
{
	mergecount=mergecount+1;
	int l1 = mean-lower+1;
	int l2 = upper-mean;
	long int left[l1];//dividing the main arrays into two different arrays
	long int right[l2];
	for(int i=0;i<l1;i++)//filling up the arrays
	{
		left[i] = array[lower+i];
	}
	for(int j=0;j<l2;j++)
	{
		right[j]=array[j+mean+1];//up till mean all elements are in the first array
	}
	int i,j,b;
	j=0;
	i=0;
	b = lower;
	while(i<l1 && j<l2)//the loop must break even if one arrays index goes out of bounds
	{
		if(left[i] > right[j])//if the element in left is more than the element in right
		{
			array[b] = right[j];
			j++;
		}
		else
		{
			array[b] = left[i];//similar to above
			i++;
		}
		b++;//array index increases
	}
	for(;i<l1;i++)//at the end of merge some elements might be left in any of the arrays these elements are already sorted so they can be directly added to the final array
	{
		array[b] = left[i];
		b=b+1;
	}
	for(;j<l2;j++)//similar as above
	{
		array[b] = right[j];
		b=b+1;
	}

}
void mergesort(long int array[],int lower,int upper)
{
	int mean;
	if(lower<upper)
	{
		//middle index is mean of the first and last indices
		mean = (lower+upper)/2;
		mergesort(array,lower,mean);//recursions
		mergesort(array,mean+1,upper);
		merge(array,lower,mean,upper);
	}
	
	
}
int main()
{
	int length;
	scanf("%d\n",&length);
	long int array[length];
	for(int i=0;i<(length);i++)
	{
		scanf("%ld,",&array[i]);//input the arrays
	}
	mergesort(array,0,length-1);
	for(int i=0;i<(length);i++)
		printf("%ld ",array[i]);//prints the arrays
	printf("\n%d",mergecount);
	return 0;
}
	

	
	
		









