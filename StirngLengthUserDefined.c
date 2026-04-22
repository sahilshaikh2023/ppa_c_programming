#include <stdio.h>

// Callby address
int strlenX(char *ptr)
{

  int i = 0;

  while (*ptr != '\0')
  {
    i++;
    ptr++;
  }

  return i;
}

int main()
{

  char Str[] = "Ganesh";
  int Ret = 0;

  Ret = strlenX(Str); // strlen(100)

  printf("String Length : %d\n", Ret);

  return 0;
}