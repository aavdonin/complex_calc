#include <stdio.h>
#include "lib.h"

int main(void) {
  int menu_item;
  for (menu_item = -1;menu_item != '5';) {
    printf("1)Add\n2)Sub\n3)Mul\n4)Div\n5)Quit\n");
    while ((menu_item = getchar()) == 10);
    if (menu_item < '1' || menu_item > '5') {	//validate input
      printf("You entered wrong number, try again...\n");
      continue;
    };
    switch (menu_item) {	//do what it says
      case '1': ;	//Add
        break;
      case '2':         //Sub
        break;
      case '3':         //Mul
        break;
      case '4':         //Div
        break;
    };
  };
  return 0;
};
