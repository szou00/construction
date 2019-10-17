#include <stdio.h>
#include <stdlib.h>
#include "functions.h"
#include <time.h>

//Create a struct that has at least 2 data members, one must be a string.
//in the functions.h file

//Write a function that returns an example of your struct when run. This should not return the same values every time.

struct fruit createStruct() {

  char* names[] = { "banana", "strawberry", "melon", "kiwi", "dragonfruit"};
  int prices[] = { 1, 2, 3, 4, 5 };

  struct fruit fruity;
  srand(time(NULL));
  int i = rand() % 5;
  fruity.price = prices[i];
  i = rand() % 5;
  fruity.name = names[i];
  return fruity;

}

//Write a function that prints out variables of your structs type in a reasonable way.
void printStruct(struct fruit *f) {
  printf("The price of a %s is %d dollars\n", f->name, f->price);
}

//Write a function that modifies values of your struct's type.
void modifyStruct(struct fruit *f, int p, char *n) {
  f->price = p;
  f->name = n;
}
