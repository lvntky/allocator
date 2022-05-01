#ifndef ALLOCATOR_H
#define ALLOCATOR_H

#include <stdio.h>

typedef char ALIGN[16];
union header {
    struct {
	size_t size;
	unsigned is_free;
	union header* next;
    } s;

    ALIGN stub;
};

#endif
