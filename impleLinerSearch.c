#include <stdio.h>

//Assigment 7: write a program to implement liner search
//run successfully
int main()
{
  int array[100], search, c, n;
//here taking value of n or size for array
  printf("Enter number of elements in array\n");
  scanf("%d", &n);
//here taking value for array
  printf("Enter %d integer(s)\n", n);

  for (c = 0; c < n; c++)
    scanf("%d", &array[c]);
//asking for  element for liner search 
  printf("Enter a number to search\n");
  scanf("%d", &search);
//appling liner search logic
  for (c = 0; c < n; c++)
  {
    if (array[c] == search)    /* If required element is found */
    {
      printf("%d is present at location %d.\n", search, c+1);
      break;
    }
  }
  if (c == n)
    printf("%d isn't present in the array.\n", search);

  return 0;
}