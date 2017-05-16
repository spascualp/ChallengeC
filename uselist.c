#include "list.h"
#include <stdio.h>


int main(int argc, char const *argv[]) {

  TList *L;

  init(&L);

  printf("The numbers 5.0,8.0 and 9.0 will be added at the end\n");
  pushBack(&L,5.0);
  pushBack(&L,8.0);
  pushBack(&L,9.0);

  print(L);

  printf("The numbers 1.0, 4.0 and 7.0 will be added at the beginning of the list\n");
  pushFront(&L,1.0);
  pushFront(&L,4.0);
  pushFront(&L,7.0);

  print(L);

  printf("\n");

  printf("The length of the list is: %d\n",length(L));

  printf("\n");

  printf("The second element of the list is: %.1f\n", getElement(L,1));

  printf("\n");

  printf("The first element of the list is: %.1f\n", getElement(L,0));

  printf("\n");


  return 0;
}
