#include "bheap.h"
#include <stdio.h>

#define N 10

int main(void){
  bheap *h;
  int i;

  h = bheap_new(N);

  // The number of iterations is 10 times as large as N.
  // the heap automatically extends itself when it become full.
  for (i = 0; i < N * 10; i++) {
    bheap_push(h, i, NULL);
  }

  while (!bheap_is_empty(h)) {
    printf("%d\n", bheap_pop(h).val);
  }

  bheap_free(h);
  return 0;
}
