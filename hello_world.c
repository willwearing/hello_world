#include <stdbool.h>
#include <stdio.h>

int main(void) {
  // Hello world, ints and floats
  int i = 2;
  float f = 3.14;
  char *s = "Hello, world!";

  printf("%s  i = %d and f = %f!\n", s, i, f);

  // Booleans
  int x = 1;

  if (x) {
    printf("x is true!\n");
  }

  // Ternary operator
  x = 11;
  int y = 0;

  y += x > 10 ? 17 : 37;

  // Print the value of y
  printf("y = %d\n", y);

  // Logical operators
  printf("The number %d is %s.\n", x, x % 2 == 0 ? "even" : "odd");

  // Increment and decrement operators
  i = 10;
  int j = 0;
  j = 5 + i++;  // Compute 5 + i, _then_ increment i

  printf("%d, %d\n", i, j);  // Prints 11, 15

  i = 10;
  j = 5 + ++i;  // Increment i, _then_ compute 5 + i

  printf("%d, %d\n", i, j);  // Prints 11, 16

  // For loops
  for (i = 0; i < 10; i++) {
    printf("i is %d\n", i);
  }

  // The comma operator
  x = (1, 2, 3);
  printf("x = %d\n", x);  // Prints 3

  for (i = 0, j = 10; i < 100; i++, j++) {
    printf("%d, %d\n", i, j);
  }

  // Return 0 to indicate success
  return 0;
}