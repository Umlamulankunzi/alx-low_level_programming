#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#define BYTE_IN_BITS 8

int _putchar(char c);
unsigned int binary_to_uint(const char *b);
unsigned int bin_char_to_int(char b);
int is_valid_binary(const char *b);
int len_str(const char *str);
unsigned int power(unsigned int indice);

void print_binary(unsigned long int n);

/** following  3 functions use the constant BYTE_IN_BITS */
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);

unsigned int flip_bits(unsigned long int n, unsigned long int m);

#endif
