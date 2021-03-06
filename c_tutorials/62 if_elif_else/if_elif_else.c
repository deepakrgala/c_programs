/* Case 3: [#if..#elif..#elif..#elif..#else..#endif] */

#include <stdio.h>
#include <stdlib.h>

#define N1 10
#define N2 20

#define SUM(N1, N2) ((N1)+(N2))
#define DIFF(N1, N2)  ((N1)-(N2))
#define PROD(N1, N2)  ((N1)*(N2))
#define MOD(N1, N2)   ((N1)%(N2))
#define AND(N1, N2)   ((N1)&(N2))
#define OR(N1, N2)    ((N1)|(N2))
#define EXOR(N1, N2)  ((N1)^(N2))

#define CALCULATOR 2

int main(int argc, char *argv[])
{
  int num1=N1;
  int num2=N2;

#if CALCULATOR==1
  printf("Simple calculator\n");
  printf("sum:%d\n", SUM(num1, num2));
  printf("diff:%d\n", DIFF(num1, num2));
  printf("prod:%d\n", PROD(num1, num2));
  printf("mod:%d\n", MOD(num1, num2));

#elif CALCULATOR==2
  printf("Scientific calculator\n");
  printf("sum:%d\n", SUM(num1, num2));
  printf("diff:%d\n", DIFF(num1, num2));
  printf("prod:%d\n", PROD(num1, num2));
  printf("mod:%d\n", MOD(num1, num2));
  printf("And:%d\n", AND(num1, num2));
  printf("Or:%d\n", OR(num1, num2));
  printf("Exor:%d\n", EXOR(num1, num2));

#else
  printf("Logical calculator\n");

#endif

  system("PAUSE");	
  return 0;
}

