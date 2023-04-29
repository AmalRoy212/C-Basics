#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  // printing the unique elements from an array
  int arr[] = {5, 3, 5, 10, 5};
  int i, j, flag ;

  for (i = 0; i < 5; i++)
  {
    flag = 0;
    for (j = 0; j < 5; i++)
    {
      if (i != j)
      {
        if (arr[i] == arr[j])
        {
          flag = 1;
          break;
        }
      }
    }
    if (flag == 0)
    {
      printf("%d", arr[i]);
    }
  }
}
