#ifndef HOLBERTON_H
#define HOLBERTON_H

/* Holberton putchar function */
int _putchar(char c);

/* 0x0B's mandatory functions */
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int heigth);
char *argstostr(int ac, char **av);

#endif
