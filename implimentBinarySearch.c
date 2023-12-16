#include <stdio.h>

//Assigment 8:  write a program to impliment binery search
int main()
{
  int c, first, last, middle, n, search, array[100];

  printf("Enter number of elements\n");
  scanf("%d", &n);

  printf("Enter %d integers\n", n);
 
 // here asking for the array element
  for (c = 0; c < n; c++)
    scanf("%d", &array[c]);

  // here entering the value you want to search
  printf("Enter value to find\n");
  scanf("%d", &search);

  first = 0;
  last = n - 1;
  middle = (first+last)/2;
 // using divid and conqure methode
  while (first <= last) {
    if (array[middle] < search)
      first = middle + 1;  // moving the first  after the next element of middle
    else if (array[middle] == search) {
      printf("%d found at location %d.\n", search, middle+1);
      break;
    }
    else
      last = middle - 1;  // moving the last element to the a element before  the  middle

    middle = (first + last)/2; // finding the middle
  }
  if (first > last) // if search exceed the  array 
    printf("Not found! %d isn't present in the list.\n", search);

  return 0;
}