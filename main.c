#include <stdio.h>
#include "lib.h"

int main(void) {
  int menu_item;
  struct complex a, b;
  for (menu_item = -1;menu_item != '5';) {
    printf("1)Add\n2)Sub\n3)Mul\n4)Div\n5)Quit\n");
    while ((menu_item = getchar()) == 10);
    if (menu_item < '1' || menu_item > '5') {	//validate input
      printf("You entered wrong number, try again...\n");
      continue;
    };
    if (menu_item == '5') break;
    printf("1st complex number:\n");
    a = get_complex();
    printf("2nd complex number:\n");
    b = get_complex();
    switch (menu_item) {	//do what it says
      case '1': ;	//Add
        print_result(add(a,b));
        break;
      case '2':         //Sub
        print_result(sub(a,b));
        break;
      case '3':         //Mul
        print_result(mul(a,b));
        break;
      case '4':         //Div
        print_result(div(a,b));
        break;
    };
  };
  return 0;
}
