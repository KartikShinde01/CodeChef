/*
	NAME:: LUNGADE KIRAN 
	ROLL NO.:: 39
	PRACTICAL NO.:: 08
	TITLE:: DISK SCHEDULING
*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
   int RQ[100], i, n, TotalHeadMoment=0, initial;
   printf("Enter the number of requests:: ");
   scanf("%d",&n);
   printf("Enter the Requests sequence\n");
   for(i=0;i<n;i++)
   {
      scanf("%d",&RQ[i]);
   }
   printf("Enter initial head position\n");
   scanf("%d",&initial);

   for(i=0;i<n;i++)
   {
      TotalHeadMoment= TotalHeadMoment + abs(RQ[i]-initial);
      initial=RQ[i];
   }

   printf("Total head moment is %d", TotalHeadMoment);
   return 0;
}

/*
***************       OUTPUT         ***********************

Enter the number of requests:: 8
Enter the Requests sequence
47
175
23
190
39
12
51
93
Enter initial head position
75
Total head moment is 734

*/
