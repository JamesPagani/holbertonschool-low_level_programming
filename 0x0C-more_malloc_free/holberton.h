#ifndef HOLBERTON_H
#define HOLBERTON_H

/* Holberton putchar function */
int _putchar(char c);

/* 0x0C mandatory functions */
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);

/* 0x0C advanced functions */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

/* 0x0C backup functions */

#endif
