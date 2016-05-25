#ifndef _STRING_H
#define _STRING_H

#include <memory.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

char* strchr (char* str, int character);
char* strrchr (char* str, int character);
size_t strcspn (const char* str1, const char* str2);
int strcmp (const char* str1, const char* str2);
size_t strlen (const char* str);
char* strncat (char* destination, const char* source, size_t num);
int strncmp (const char* str1, const char* str2, size_t num);
char* strncpy (char* destination, const char* source, size_t num);
char* strpbrk (char* str1, const char* str2);
size_t strspn (const char* str1, const char* str2);
char* strstr (char* str1, const char* str2 );

#ifdef _RECLIB_SOURCE
    char* strcpy (char* destination, const char* source);
    char* strrev (char* str);
    int _stricmp (const char* str1, const char* str2);
    int _strnicmp (const char* str1, const char* str2, size_t num);
#endif

#ifdef __cplusplus
}
#endif

#endif
