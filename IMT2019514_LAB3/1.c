// Given two circles with centers at (x1,y1) and (x2,y2) and having radiusr1andr2respectively, are considered to beintersecting if they have a common area.  Even if the two circles touch at apoint they are considered to be intersecting.Write a (C) program to input integer values of (x1,y1,x2,y2,r1,r2), out-put “YES” if the two circles intersect, otherwise output “NO” (without thequotes).Note:If  one  of  the  radius  values  is  negative,  output  should  be”Invalid input”.  Radius value of 0 is acceptable.




#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(void)
{
	int x1,y1,x2,y2,r1,r2,sum,difference;
        double distance;	
	scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&r1,&r2);
	if(r1<0||r2<0)
		printf("Invalid input\n");
	else
	{
		distance = sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
		difference = r1 - r2;
	        difference = abs(difference);	
	        sum = r1+r2;
		if((sum >= distance)&&(difference<=distance))
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}
