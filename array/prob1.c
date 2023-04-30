#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int values[10];
  int i, j, sum = 0;
  int length = 10;
  printf("Enter the values to your array");
  for (i = 0; i < length; i++)
  {
    scanf("%d", &values[i]);
    sum = sum + values[i];
  }
  if (sum > 100)
  {
    for (i = 0; i < length; i++)
    {
      if (values[i] % 2 == 1)
      {
        for (j = i; j < length; j++)
        {
          values[j] = values[j + 1];
          length--;
          i--;
        }
      }
    }
  }
  else
  {
    for (i = 0; i < length; i++)
    {
      if (values[i] % 2 == 0)
      {
        for (j = i; j < length; j++)
        {
          values[j] = values[j + 1];
          length--;
          i--;
        }
      }
    }
  }
  return EXIT_SUCCESS;
}