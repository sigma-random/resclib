#ifndef _STDLIB_H
#define _STDLIB_H

#include <limits.h>
#include <stddef.h>

#define EXIT_SUCCESS    (0)
#define EXIT_FAILURE    (1)

#define __min(x,y) \
    ({ \
        typeof(x) __x = (x); \
        typeof(y) __y = (y); \
        (void)(&__x == &__y); \
        __x < __y ? __x : __y; \
    })
#define __max(x,y) \
    ({ \
        typeof(x) __x = (x); \
        typeof(y) __y = (y); \
        (void)(&__x == &__y); \
        __x > __y ? __x : __y; \
    })

#ifdef __cplusplus
extern "C" {
#endif

void _Exit (int status);

int abs (int x);
long labs (long x);
long long llabs (long long x);

int mblen (const char* pmb, size_t max);

#ifdef __cplusplus
}
#endif

#endif
