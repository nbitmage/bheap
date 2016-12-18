#include "bheap.h"
#include <stdio.h>

typedef struct {
  int id;
  const char* name;
} user_t;

int main(void){
  bheap *h;

  user_t usr1 = {1, "rk0der"};
  user_t usr2 = {31, "john"};
  user_t usr3 = {18, "mike"};
  user_t usr4 = {2, "keen"};
  user_t usr5 = {13, "vlad"};

  h = bheap_new(10);
  bheap_add(h, -usr1.id, (void*)&usr1);
  bheap_add(h, -usr2.id, (void*)&usr2);
  bheap_add(h, -usr3.id, (void*)&usr3);
  bheap_add(h, -usr4.id, (void*)&usr4);
  bheap_add(h, -usr5.id, (void*)&usr5);
  for (int i = 0; i < 5; i++) {
    printf("%s\n", ((user_t*)bheap_get(h).opt)->name);
  }
  bheap_free(h);
  return 0;
}
