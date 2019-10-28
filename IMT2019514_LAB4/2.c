//Linear Search
//nput ten integers.  In addition, input a numberxto search.  Perform linearsearch to findxin your list of numbers.  Output of your program should be“1” ifxis found in your list,  else output “0”.  Also output the number ofcomparisons your program makes while searching.






#include <stdio.h>
int main(void)
{
	int arr[10];/* array declaration*/
	int x=0,count=0;
	int output=0;
	for(int i = 0;i<10;i++)
	{
		scanf("%d,",&arr[i]);/*inputting values*/
	}
	scanf("%d",&x);
	for(int m = 0;m<10;m++)
	{
		count=count+1;/*counting number of comparisons*/
		if(arr[m]==x)
		{
			output = 1;/*if element is present output = 1*/
			break;
		}
		
	}
	printf("%d ",output);
	printf("%d",count);/*printing number of comparisons*/
	return 0;
}
