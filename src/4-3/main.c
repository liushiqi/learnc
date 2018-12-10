#include <stdlib.h>
#include <signal.h>
#include <stdio.h>
#include "calc.h"

static void handler(int signal) {
  fputc('\n', stdout);
}

int main(void) {
  signal(SIGINT, handler);
  while (!error_handler(getop()));
  return 0;
}
