//Write a (C) program that takes as input the number ofintegers to read, sayn. Next it should read thennumbers, 
//read them andallocate dynamic memory to store thenintegers.. Finally it should use aloop to print the numbers. 
//Make sure to free the allocated space before yourfunction exits. Note: DO NOT USE ARRAYS.


#include <stdio.h> 
#include <stdlib.h>  			//malloc function is used for dynamic memory allocation 
void print(int*ptr,int n)		//defining a function taking a pointer and an integer as arguments 
{
  for(int i = 0;i<n;i++)		
  {
    printf("%d ",ptr[i]);		//using a loop to print the integer elements stored in the memory address
  }
  free(ptr);				//using free function to free the allocated space
}
int main()
{
  int*ptr;				//creating a memory bloc which contains integers
  int n;				//declaring integer n which will be inputted by user
  scanf("%d",&n);			//inputting n
  ptr = (int*)malloc(n*sizeof(int));	//using malloc to dynamically allocate memory which can store n integers
  for(int i = 0;i<n;i++)
  {
    scanf("%d",&ptr[i]);		//inputting the integers to print them back
  }
  print(ptr,n);				//calling the function 'print' to print the elements inputted
  return 0;
}
