#include <stdio.h>
void calcula(int *b)
{
  printf("calcula %d\n", (*b));
  (*b)++;
  printf("calcula %d\n", &b);
}

int main()
{
  int c = 10;
  printf("main %d\n", c);

  calcula(&c);
  printf("main %d\n", &c);
}
