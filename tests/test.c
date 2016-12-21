#include "bheap.h"
#include <stdio.h>

typedef struct {
  int id;
  int price;
  char* name;
} item_t;

int main(void){
  bheap *h;
  item_t *p;

  // prepare data for test
  item_t item1 = {8,  120,  "apple"};
  item_t item2 = {4,  80,   "orange"};
  item_t item3 = {32, 100,  "banana"};
  item_t item4 = {2,  130,  "kiwi"};
  item_t item5 = {8,  150,  "grape"};

  // create binary-heap structure
  h = bheap_new(10);
  // add data
  bheap_push(h, item1.id, (void*)&item1);
  bheap_push(h, item2.id, (void*)&item2);
  bheap_push(h, item3.id, (void*)&item3);
  bheap_push(h, item4.id, (void*)&item4);
  bheap_push(h, item5.id, (void*)&item5);

  // iterate process until the heap become empty
  while (!bheap_is_empty(h)) {
    // get data in the root of the heap.
    p = (item_t*)bheap_pop(h).opt;
    printf("id:%d,name:%s\n", p->id, p->name);
  }

  // free memory space allocated for heap
  bheap_free(h);
  return 0;
}
