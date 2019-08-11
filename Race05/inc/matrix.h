#ifndef MATRIX_H
#define MATRIX_H
#include <unistd.h>
#include <ncurses.h>
#include <string.h>
#include <stdlib.h>
#include <sys/ioctl.h>

struct column {
	char *rows;
};


int prob(int percentage);
char get_random_num(void);
void get_term_size(int *rows, int *cols);
int matrix( WINDOW *mainwin);

#endif
