/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class BestCupon
{
	public static void main (String[] args) throws java.lang.Exception
	{   int f;
		Scanner k = new Scanner(System.in);
		f = k.nextInt();
		while(f-- > 0){
		    int a;
		    a = k.nextInt();
		    if (a <= 1000)
            System.out.println(100);
            else
            System.out.println((a*10)/100);
		}
	}
}
