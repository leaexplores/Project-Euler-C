/* Project Euler Problem 5 
Written by Mathieu Rheaume <ddrmanxbxfr@gmail.com>
This solution is not meant to be optimized*/
#include <stdio.h>
int main()
{
  int i,j,k,l,smallNumber;
  
  i = 2;
  smallNumber = -1;
  while (smallNumber == -1)
    {
      k = 0;

      for (j = 1; j <= 20; j++)
	{
	  l = 0;
	  l = i % j;

	  if (l == 0)
	    k++;
	}
      if (k > 19)
      printf("Result of k is %i\nTested on i = %i\n", k,i);
      
      if (k == 20)
	smallNumber = i;
      else
	i++;
    }
  printf("======================\n");
  printf ("The number found is %i\n", smallNumber);
  return 0;
}
