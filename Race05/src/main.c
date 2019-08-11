#include "matrix.h"

int main(int argc, char *argv[]) {
	int opt;
	char *filename;
	WINDOW * mainwin;

	if ((mainwin = initscr()) == NULL) {
		fprintf(stderr, "Error initialising ncurses.\n");
		exit(-1);
	}

	matrix( mainwin);
	delwin(mainwin);
	endwin();
	refresh();

	return 0;
}
