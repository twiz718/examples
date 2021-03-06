#include <stdio.h>
#include <tchar.h>

int add(int a, int b)
{
  int retval = 0;

  __asm
  {
    MOV EAX, a
    MOV EBX, b
    ADD EAX, EBX
    MOV retval, EAX
  };

  // retval should now contain the value of a + b
  return retval;
}


int main()
{
  int a = 0;
  int b = 0;

  printf("please input two integers as prompted in order to add them together using asm.\n");

  printf("a=");
  scanf_s("%d", &a);

  printf("b=");
  scanf_s("%d", &b);

  printf("add(%d, %d) returned: %d\n", a, b, add(a, b));

  return 0;
}
