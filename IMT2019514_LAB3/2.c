//Write a (C) program that inputs a stringSconsisting oflower-case English alphabets and an integerL, find the number of distinct sub-strings of lengthL(>0) of the given stringS.Note:IfL >|S|(lengthofS), then output should be 0.







#include <stdio.h>
#include <string.h>
int main(void)
{
	char string1[1000];
	scanf("%s",string1);    			// string1 represents the 1d array where the input is stored
	int l,j,i,k,g,x,q,o,count=0;			//declaring variables
	scanf("%d",&l);
	char string2[1000][1000] ,r[3]="\0\0\0";	// defining a 2dimensional array which contains all the substrings
	int strln;
	strln = strlen(string1);			// finding the length of inputted string
	for(i=0;i<=(strln-l);i++)
	{
		for(j=0;j<l;j++)
		{
			string2[i][j]=string1[i+j];	//filling up the 2d array
		}
		string2[i][l] = '\0';			// assigning null value to the characters which cannot form a substring
	}
       for(k=0;k<strln;k++)				
	{
		for(o=k+1;o<strln;o++)			
		{
			if(k!=o)
			{
				if(strcmp(string2[k],r)!=0 && strcmp(string2[o],r)!=0)		//making sure that all substrings are unique
				{	
		 			if(strcmp(string2[k],string2[o])==0)
					{	
			   			 strcpy(string2[o],r); 	
					}	
				}
			
			}
		}
	}	
	for(g=0;g<=strln-l;g++)
	{
		if(strcmp(string2[g],r)!=0)		
		{
			
			count = count +1; 		// counting the number of unique substrings
		}
	}
	printf("%d",count);
	return 0;
}
		
		

	





