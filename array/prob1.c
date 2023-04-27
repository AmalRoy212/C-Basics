#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int values[10];
  int i, j, sum = 0;
  printf("Enter the values to your array");
  for (i = 0; i < 10; i++)
  {
    scanf("%d", &values[i]);
    sum = sum + values[i];
  }
  if (sum > 100)
  {
    for (i = 0; i < 10; i++)
    {
      
    }
  }
  return EXIT_SUCCESS;
}