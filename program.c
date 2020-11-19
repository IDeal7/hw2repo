#include <stdio.h>

int sum(int n)
{
  if (n == 0) return 0;
  return n + sum(n-1);
}

int fib(int n)
{
  if (n == 0) return 0;
  if (n == 1) return 1;
  return fib(n-1) + fib(n-2);
}

int main()
{
  printf("Hello world!\n");
  printf("fib(5)  = %d\n", fib(5));
  printf("sum(10) = %d\n", sum(10));
  return 0;
}
