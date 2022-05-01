# Allocator 
![do you even c](./photo.jpg)
Allocator is a simple dynamic memory allocation library.
It implements , malloc(), calloc(), realloc() and free() functions.

## How it's work?

```
  before ...
                                                          <-N-->
   +----+-----+--+--------//--+             +----+-----+--+----+---//--+
   |##A#|##B##|C#|  free      |             |##A#|##B##|C#|##D#|free   |
   +----+-----+--+---------//-+             +----+-----+--+----+---//--+
                 ^freebase    ^freetop                    ^d   ^fbase  ^ftop
```

