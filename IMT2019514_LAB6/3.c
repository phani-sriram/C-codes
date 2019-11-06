//Implement your own version ofstrcat function to con-catenate (join) two character strings.
//Your (C) program should input twostringss1ands2(maximum length not more than 255 characters) and store the strings using dynamic memory. Next it should allocate new memory big
//enough to hold both these strings together. Now concatenate the two strings. 
//Print the new concatenated string.Note: DO NOT USE ARRAYS. 
#include <stdio.h>
#include <stdlib.h>                                   //contains malloc function
#include <string.h>                                   //contains strlen functions
void strcon(char*ptr1,char*ptr2)                      //declaring the function that will concatenate the two inputted strings
{
  char*outputptr;                                     //declaring a pointer to store the concatenated strings
  int l1,l2;                                          //l1 and l2 will store the lengths of the strings inputted
  l1 = strlen(ptr1);
  l2 = strlen(ptr2);
  outputptr = (char*)malloc((l1+l2)*sizeof(char));    //using malloc to dynamically allocate the string containing the space to store l1+l2 chars
  for(int i = 0;i<l1;i++)
    outputptr[i] = ptr1[i];                           //the first l1 elements in the output will be the elements of the first string
  for(int j = 0;j<l2;j++)
    outputptr[l1+j] = ptr2[j];                        //since l1 elements have been filled in the output the last index is l1-1 so from l1 to l1+l2-1 the
                                                      //elements will be from string2
  printf("%s",outputptr);    			      //printing the output string
  free(ptr1);
  free(ptr2);
}
int main()
{
  char*s1;                                            //s1 ans s2 are the pointers storing the two strings
  char*s2;
  s1 = (char*)malloc(255*sizeof(char));               //using malloc to dynamically allocate memory to store the strings
  s2 = (char*)malloc(255*sizeof(char));
  scanf("%s",s1);                                     //inputting the strings
  scanf("%s",s2);
  strcon(s1,s2);                                      //calling the strcon function
  return 0;
}
