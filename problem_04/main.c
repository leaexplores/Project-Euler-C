/* Project Euler - Problem 04
Solution Written by Mathieu Rhéaume <ddrmanxbxfr@gmail.com>
This solution is not meant to be optimized.
*/

#include <stdio.h>
int main()
{
  char buffer[50];
  int i,j,k,l,m,n,o,p;

  o = 10;

  for (i = 100; i < 1000; i++)
    {
      for (j = 100; j < 1000; j++)
	{
	  l = 0;
	  m = 0;
	  n = 0;
	  p = 0;
	  k = i * j;

	  sprintf(buffer,"%i\n", k);

	  while (buffer[l] != '\n')
	    {
	      l++;
	    }

	  l = l -1;
	  n = l;

	  for(p = 0;p < l;p++)
	    {
	      if (buffer[p] == buffer[n])
		{
		  n--;
		}
	    }

	   if (n == 0)
	     {
	       printf("FUCK YEAH I'VE FOUND A NUMBER : %i\n", k);
	       if (k > o)
		 o = k;
	     }
	}
    }
  printf("The largest prime number with 3 digits is %i\n",o);
  return 0;
}
