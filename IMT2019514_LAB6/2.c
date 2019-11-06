//Implement your own version ofstrcmpfunction to comparetwo character strings. 
//Your (C) program should input two strings (maximumlength not more than 255 characters) and use pointers while comparing thetwo strings.  
//Allocate dynamic memory to store the strings.  Your outputshould be ‘0’ if the strings are equal, should be ‘1’ if they are unequal. 
//Note: DO NOT USE ARRAYS.



#include <stdio.h>
#include <stdlib.h>                         //contains malloc function
#include <string.h>                         //contains strlen function
int strcompare(char*ptr1,char*ptr2)         //defining a function 'strcompare' to check the strings if they are identical or not
{                                           //with its arguments two pointers pointing to the two strings
  int l1,l2;
  l1 = strlen(ptr1);                        //l1 and l2 are integers which will store the lengths of the pointers
  l2 = strlen(ptr2);
  if(l1!=l2)                                //if the lengths are unequal obviously the strings are unequal
  {
    return 1;                               //directly the program must return 1
  }
  for(int i = 0;i<l1;i++)
  {
    if(ptr1[i] == '\0' || ptr2[i] == '\0')  //the comparisons must stop when the strings end and the null character is reached the loop must break
    {
      break;
    }
    if(ptr1[i] != ptr2[i])                  //for any one index if the characters are unequal it means that the strings aren't same and we must return 1
    {
      return 1;
    }
  }
  free(ptr1);
  free(ptr2);
  return 0;                                 //if the function has not returned anything till now that means that the strings are equal
}
int main()
{
  char*ptr1;                                //declaring the pointers that will store the strings that will be inputted
  char*ptr2;
  ptr1 = (char*)malloc(255*sizeof(char));   //using malloc to dynamically allocate the memory that will store the stings
  ptr2 = (char*)malloc(255*sizeof(char));
  scanf("%s",ptr1);                         //taking the strings as input from the user
  scanf("%s",ptr2);
  int a = strcompare(ptr1,ptr2);            //assingning the value of the function to an int variable just to make print statement smaller
  printf("%d",a);                           //printing the return value
  return 0;
}
