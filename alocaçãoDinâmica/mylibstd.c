#include "mylibstd.h"
#include <stdlib.h>
#include <stdio.h>

void limparBuffer(){
  char c;
  while((c = getchar()) != '\n' && !EOF);
}



