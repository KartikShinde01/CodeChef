/*
	NAME:: LUNGADE KIRAN SANJAY
	ROLL NO.:: 39
	PRACTICAL NO.:: 07
	TITLE:: PAGE REPLACEMENT ALGORITHM
*/


#include<stdio.h>
int main()
{
int i,j,n,ref_str[50],frame[10],no,k,avail,fcount=0;  // Declaration of variable required
printf("\n ENTER THE NUMBER OF PAGES:\n");
scanf("%d",&n);                                        // total no. of pages in reference string
printf("\n ENTER THE PAGE NUMBER :\n");
    for(i=1;i<=n;i++)                                   // accept entire reference string
        scanf("%d",&ref_str[i]);
printf("\n ENTER THE NUMBER OF FRAMES :");
scanf("%d",&no);
    for(i=0;i<no;i++)
                frame[i]= -1;  // initialize all page frame to -1
j=0;                           // initialize page frame pointer
printf("\n ref string  \t page frames     \tHit/Fault\n");
    for(i=1;i<=n;i++)
                {
                    printf("%d\t\t",ref_str[i]);
                    avail=0;          // Default value of available flag is 0
                    for(k=0;k<no;k++)
                    if(frame[k]==ref_str[i]) // input of  page  requested is compared with existing content of FRAME
                    {
                            avail=1;        // as page found available is turned 1
                            for(k=0;k<no;k++)
                                    printf("%d\t",frame[k]);   // Print Current state of FRAME
                            printf("H");                        // Indication of Page Hit
                    }
                    if (avail==0)  // input   page  requested NOT existing in  FRAME
                            {
                                        frame[j]=ref_str[i];         // place page requested at j th location in FRAME
                                        j=(j+1)%no;            // Update J for next Cycle
                                        fcount++;                // Increment Counter for Page Fault
                                        for(k=0;k<no;k++)
                                        printf("%d\t",frame[k]);  // Print Current state of FRAME
                                        printf("F");            // Indication of Page Fault
                            }
                            printf("\n");
                }
printf("Page Fault Is %d",fcount);
return 0;
}

/*
*****************      OUTPUT       **************************

 ENTER THE NUMBER OF PAGES:
7

 ENTER THE PAGE NUMBER :
5
4
5
3
1
4
5

 ENTER THE NUMBER OF FRAMES :3

 ref string      page frames            Hit/Fault
5               5       -1      -1      F
4               5       4       -1      F
5               5       4       -1      H
3               5       4       3       F
1               1       4       3       F
4               1       4       3       H
5               1       5       3       F
Page Fault Is 5

*/
