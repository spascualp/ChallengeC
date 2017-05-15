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

  return 0;
}
