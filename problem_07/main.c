/* Project euler - Problem 7
Written by Mathieu Rheaume <ddrmanxbxfr@gmail.com>
This solution is not meant to be optimized
*/
#include "stdio.h"
int main()
{
  int latestPrimeFound, i, k, l, m, n, o;
  i = 3;
  k = 1;
  while (k < 10001) // k < numberYouWantToFind the primes. Ex k<6 for 6 primes
    {
      l = i % i;
      o = 0;
      for (n = 2; n <= i; n++)
	{
	  m = i % (n);
	  if (m == 0)
	    o++;
	}

      if (l == 0 && o == 1)
			{
			  latestPrimeFound = i;
			  k++;
			  printf ("Prime found at %i\nPrime no.%i\nValue of O is %i\n",i,k,o);
		        }
      i++;
    }
  return 0;
}
