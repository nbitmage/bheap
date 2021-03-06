# bheap
[![BuildStatus](https://travis-ci.org/rk0der/bheap.svg?branch=master)](https://travis-ci.org/rk0der/bheap)

Binary heap library written in C

bheap is binary heap implementation in C language.  
As you know, binary heap is used in;

- priority queue
- heap sort

and so on. The data structure has better performance compared to others.

## Usage

Code:
```
#include "bheap.h"
...
bheap *h = bheap_new();
bheap_push(h, 3, (void*)"three");
bheap_push(h, 1, (void*)"one");
bheap_push(h, 2, (void*)"two");
printf("%s\n", (char*)bheap_pop(h));
printf("%s\n", (char*)bheap_pop(h));
printf("%s\n", (char*)bheap_pop(h));
bheap_free(h);
```

Output:

```
one
two
three
```

See the directry **tests/** to learn the library usage.


## Contributing

Send a pull request to <http://github.com/rk0der/bheap>. We welcome your great  
idea for this project. Feel free to contribute your code to the project. You can  
use <http://github.com/rk0der/bheap/issues> for discussion. 

## License

MIT license (© 2018 Ryota Kota)

