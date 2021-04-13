#include <stdio.h>

int main(void) {
  int number;
  printf("please input number:\n");
  scanf("%d", &number);

  if (number > 0)
    printf("%d is positive number. \n", number);
  else if (number == 0)
    printf("%d is not number or 0. \n", number);
  else
    printf("%d is negative number. \n", number);
  return 0;
}
