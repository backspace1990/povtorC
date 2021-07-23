#include <stdio.h>

  #define LEN 12  
  
  int   main(void)
  {
      int c, i, j;
      int n_char[LEN];

      for (i = 0; i < LEN; ++i)
          n_char[i]= 0;

      while ((c = getchar()) != EOF)
          if (c >='0' && c <= '9')
              ++n_char[c-'0'];
          else if (c == ' ' || c == '\n' || c == '\t')
              ++n_char[10];
          else 
              ++n_char[11];

      for (i = 0; i < LEN; ++i){
          printf("%d : ", i);
          for (j = 1; j <= n_char[i]; ++j)
              printf("|");
          printf(" > %d\n", n_char[i]);
      }    

      return 0;
  }