#include <stdio.h>

  #define MAXLEN 10  

  int main()
  {
      int i, norm, c, ncw;
      int w_length[MAXLEN];

      ncw = 0;
      for (i = 0; i < MAXLEN; ++i)
          w_length[i] = 0;

      while ((c = getchar()) != EOF) {
          if (c == ' ' || c == '\n' || c == '\t'){
              if (ncw >= MAXLEN)
                  w_length[0] += 1;
              else if (ncw > 0)
                  w_length[ncw] += 1;
              ncw = 0;
          }
          else 
              ++ncw;
      }

      for (i = 0; i < MAXLEN; ++i)
          printf("%d", i);
      printf("\n");

      norm = 1; 
      while (norm > 0) {
          norm = 0;
          for (i = 0; i < MAXLEN; ++i)
          {
              if (w_length[i] > 0) {
                  printf("-");
                  w_length[i] -= 1;
              }
              else
                  printf(" ");
              norm += w_length[i];
          }
          printf("\n");
      }
      return 0;
  }