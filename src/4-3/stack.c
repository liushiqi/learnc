#include <math.h>
#include "calc.h"

#define MAXVAL 100

static int sp = 0;
static double val[MAXVAL];

int push(double value) {
  if (isnan(value))
    return -1;
  else if (isinf(value))
    return -2;
  val[++sp] = value;
  return 0;
}

double pop(void) {
  return sp == 0 ? NAN : val[sp--];
}

int is_empty(void) {
  return sp == 0;
}

void empty(void) {
  sp = 0;
}
