#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "calc.h"

#define BUF_SIZE 100

char line[BUF_SIZE];
char *pos = line;

int getch(void) {
  if (*pos == 0) {
    if (fgets(line, BUF_SIZE, stdin) == NULL) {
      if (feof(stdin)) {
        return -1;
      } else {
        return getch();
      }
    }
    pos = line;
  }
  return *(pos++);
}

void ungetch(void) {
  --pos;
}

double get_double(void) {
  return strtod(pos, &pos);
}

void clear_buffer(void) {
  *pos = 0;
}

void skip(void) {
  for (char *chase = line; chase < pos; ++chase) {
    fputc(' ', stdout);
  }
}

int error_handler(enum ErrorType error) {
  if (error != SUCC) --pos;
  if (error == EEOF) return -1;
  else if (error == EUNK) {
    skip();
    printf("^ Error: Unknown character %c\n", *pos);
    clear_buffer();
    empty();
  } else if (error == EDIV0) {
    skip();
    printf("^ Error: divided by zero.\n");
    clear_buffer();
    empty();
  } else if (error == ERNUM) {
    skip();
    printf("^ Error: Required a number but get %c\n", *pos);
    clear_buffer();
    empty();
  } else if (error == EROP) {
    skip();
    printf("^ Error: Required a operation but get a new line.\n");
    clear_buffer();
    empty();
  }
  return 0;
}

#undef BUFSIZE
