#include <stdio.h>

  int main()
  {
      int i;

      i = 1;
      while (i+i > i) {
          i = 2*i;
          printf("%d\n", i);
      }
      return 0;
  }