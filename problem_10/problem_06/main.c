/*Project Euler - Problem 6 
Written by Mathieu Rheaume <ddrmanxbxfr@gmail.com>
This solution is not meant to be optimised*/
#import "stdio.h"

int main()
{
  int totalSquare,totalSum,i,j,result;

  for (i = 0; i < 101; i++)
    {
      totalSquare = totalSquare + (i*i);
      j = j + i;
    }
  totalSum = j*j;
  result = totalSum - totalSquare;
  printf ("The Final value is %i\n", result);
  return 0;
}
