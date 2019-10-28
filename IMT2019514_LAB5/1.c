//Bubble Sort
//Write a (C) program to input comma sepa-rated 20 integers and store them in an array, use a Bubble sort function tosort the integers in increasing order.  Print the sorted numbers, also outputthe number of swaps and comparisons while performing the search in a newline.


#include <stdio.h>
void bublsort(long long int array[])//array declaration
{
        int swapcount= 0,comparisons = 0;//swaps and comparisons count
        for(int i = 0;i<19;i++)
        {
                for(int j = 0;j<19-i;j++)
                {
                        if(array[j] > array[j+1])//comparing the two consecutive elements to see which is greater
                        {
                                long long int c;
                                c = array[j];//swapping using temp variable
                                array[j] = array[j+1];
                                array[j+1] = c;
                                swapcount++;//increment of swap variable
                        }
                        comparisons++;//every time the loop runs one more comparison is done 
		}
	}
	for(int h=0;h<20;h++)//printing the array
	{
		printf("%lld ",array[h]);
	}
	printf("\n%d %d\n",swapcount,comparisons);
}
int main()
{
        long long int array[20];
        for(int i = 0;i<20;i++)//inputting the array
        {
                scanf("%lld,",&array[i]);
        }
        bublsort(array);//running the bubble sort function
        return 0;
}

