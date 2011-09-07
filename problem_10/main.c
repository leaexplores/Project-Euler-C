/* Project Euler - Problem 10
Solution Written by Mathieu Rhéaume <ddrmanxbxfr@gmail.com>
This solution is not meant to be optimized but to get the result.
*/
#include "stdio.h"
int main()
{
  int i,j,k;
  char found;
  double totalSum;
  i = 2;

   while (i < 2000000)
   {
      k = 0;
      if ((i % 5) != 0||(i % 2) != 0||(i%3) != 0)
	{
	  j = 2;
	  found = 0;
	  while ((j <= i) && found == 0)
	    {
	      if (j != i)
		if ((i % j) == 0)
		  {found = 1;}
		else {} // Cond vide pour utiliser le 2e else
	      else
		k++;

	      j++;
	    }
      
	  if (k == 1)
	    {
	      totalSum = totalSum + i;
	    }
	}
      i++;
      if ((i % 1000) == 0)
	printf("Counter of i now at %i and total sum is %f\n",i,totalSum);
    }
    printf("Total sum is %f\n",totalSum);
  return 0;
}
