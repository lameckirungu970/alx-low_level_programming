#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints 'fizz' for multiples of 3, buzz for 
 * multiples of 5 and fizzbuzz
 * for multiples of both 3 and 5
 */
int main(void)
{
  int i = 1;

  for (; i <= 100; i++)
    {
      if (i % 3 == 0)
	{
	  printf("Fizz ");
	}
      else if (i % 5 == 0)
	{
	  printf("Buzz ");
	}
      else if (i % 15 == 0)
	{
	  printf("FizzBuzz ");
       	}
      else
	{
	  printf("%d ", i);
	}    
    }
     printf("\n");
     return (0);
}
