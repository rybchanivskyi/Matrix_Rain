#include "matrix.h"

void get_term_size(int *rows, int *cols) {
    struct winsize ws;

    ioctl(0, TIOCGWINSZ, &ws);
    *rows = ws.ws_row;
    *cols = ws.ws_col;
}
