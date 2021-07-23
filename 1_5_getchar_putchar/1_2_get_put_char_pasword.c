#include <stdio.h>

int  get_put_char()
{
  char cd1, cd2, cd3, cd4, cd5, cd6;
  int i;

  printf("Enter your paswords and press ENTER:");

  cd1 = getchar();
  cd2 = getchar();
  cd3 = getchar();
  cd4 = getchar();
  cd5 = getchar();
  cd6 = getchar();

  if(cd1 != 49 || cd2 != 50 || cd3 != 51 || cd4 != 52 || cd5 != 53 || cd6 != 54)
    i = 0;
  else
    i = 1;
  switch(i)
  {
    case 0:
        printf("password incorrect!\n");
        break;
    case 1:
        printf("password correct and your pasword : 123456 !:)\n");
        break;
  }
  return (0);
}

int main(void)
{
  get_put_char();
  
  return 0;
}