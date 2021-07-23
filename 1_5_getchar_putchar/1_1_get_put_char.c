#include <stdio.h>

int main(void)
{
  char cd1, cd2;

  printf("Enter two characters and press ENTER:");

  cd1 = getchar();
  cd2 = getchar();

  printf("Your characters:\nfirst char : %c \nsecond char: %c\n", putchar(cd1), putchar(cd2));

  return 0;
}