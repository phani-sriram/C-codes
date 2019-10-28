//Write a (C) program to input comma separatedten integers and store them in an array, print the numbers in reverse orderof input, separated by a space.




#include <stdio.h>
int main(void)
{
	int arr[10]; /* array declaration*/
	for(int i =0;i<=9;i++)
	{
		scanf("%d,",&arr[i]);/*value input in array*/
	}
	int k,a;
	k = 0;
	for(int j = 0;j<5;j++)
	{
		a  = arr[j];
		arr[j] = arr[9-j];
		arr[9-j] = a;
	}
	for(int k = 0;k<10;k++)
	{
		printf("%d ",arr[k]);
	}


	return 0;
}
	

