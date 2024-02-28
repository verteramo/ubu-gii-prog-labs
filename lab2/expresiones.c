#include <stdio.h>

int main() {
  int x=2, n=3;

  x*=--n;
  printf("(3+8/2)*3: %i\n", (3+8/2)*3);
  printf("5!=5: %i\n", (int)(5!=5));
  printf("6+20/2: %i\n", 6+20/2);
  printf("(3+5)*3: %i\n", (3+5)*3);
  printf("x*=--n: %i\n", x);
  printf("1==5: %i\n", 1==5);

  return 0;
}
