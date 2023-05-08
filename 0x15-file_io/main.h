#ifndef MAIN_H
#define MAIN_H


/* Function prototypes */

int _putchar(char c);
int append_text_to_file(const char *filename, char *text_content);
int create_file(const char *filename, char *text_content);

void print_magic(unsigned char *ident);
void print_class(unsigned char class);
void print_data(unsigned char data);
void print_osabi(unsigned char osabi);
void print_type(unsigned int type);



#endif
