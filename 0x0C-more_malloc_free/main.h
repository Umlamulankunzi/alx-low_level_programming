#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void copy_str(char *src, char *dest, unsigned int n);
unsigned int len_str(char *s);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void _memset_(char *s, char b, unsigned int n);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
void _memcpy_(char *dest, char *src, unsigned int n);

#endif
