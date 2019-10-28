//Quick Sort
//Write a (C) program to inputncomma sepa-rated integers and store them in an array, use a recursive Quick sort function to sort the integers in increasing order.The first line of input is n and the next line contains n comma separated integers.Use the last element as the pivot.Print the sorted numbers, also output the pivot index of the last ele-ment for the given input in a new line.



#include <stdio.h>
int pivoting(long int array[],int lower,int upper) //defining function to swap the elements according to the pivot
{
	int pivot = array[upper];//pivot is last element
	int i;
	i = lower-1;//i starts one element less than the first element
	int j;
	j = lower;//defining running variable
	while(j<=(upper-1))//limiting value of j
	{
		if(array[j]<pivot)//swapping the element at the partition index and the element less than pivot
		{
			i = i+1;
			long long int temp;
			temp = array[i];//swapping using temp variable
			array[i]=array[j];
			array[j]=temp;
		}
		j=j+1;
	}
	long long int temp1;//bringing the pivot in the its true place in the sorted array
	temp1=array[i+1];
	array[i+1]=array[upper];
	array[upper]=temp1;
	return(i+1);//returning the value of pivot index
}
void quicksort(long int array[],int lower,int upper)
{
	if(lower<upper)//limiting value for lower is less than upper
	{
		int pivot_index = pivoting(array,lower,upper);
		quicksort(array,lower,pivot_index-1);
		quicksort(array,pivot_index+1,upper);
	}
}
int main()
{
	int length;
	scanf("%d\n,",&length);//inputting the length
	long int array[length];
	for(int i = 0;i<length;i++)
	{
		scanf("%ld,",&array[i]);//inputting the array
	}
	long long int end=array[length-1];
	quicksort(array,0,length-1);
	for(int j=0;j<length;j++)//printing the array
	{
		printf("%ld ",array[j]);
	}
	for(int i=0;i<length;i++)
	{
		if(array[i]==end)
		{
			printf("\n%d",i);//printing the pivot index
			break;
		}
	}
	
	return 0;
}



