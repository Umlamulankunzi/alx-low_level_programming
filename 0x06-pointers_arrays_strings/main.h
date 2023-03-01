#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
int _strlen(char *s);
void reverse_array(int *a, int n);
char *string_toupper(char *);
char *cap_string(char *);
char to_upper(char);
char *leet(char *str);
char leet_char(char c);
char *rot13(char *);
char rot13_char(char);
void print_number(int n);
char *infinite_add(char *n1, char *n2, char *r, int size_r);
void print_buffer(char *b, int size);
int is_printable(int ch);
void print_hex(char *b, int start, int end);
void print_ascii(char *b, int start, int end);

#endif /* MAIN_H */
