# Allocator 
Allocator is a simple dynamic memory allocation library.
It implements , malloc(), realloc() and free() functions.

## How it's work?

```
  before ...
                                                          <-N-->
   +----+-----+--+--------//--+             +----+-----+--+----+---//--+
   |##A#|##B##|C#|  free      |             |##A#|##B##|C#|##D#|free   |
   +----+-----+--+---------//-+             +----+-----+--+----+---//--+
                 ^freebase    ^freetop                    ^d   ^fbase  ^ftop
```

