#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include "calc.h"

double mod(double d1, double d2) {
  return (double) ((int) d2 % (int) d1);
}

enum ErrorType getop(void) {
  int temp;
  switch (temp = getch()) {
    case '+':
      if (push(pop() + pop()) == -1) {
        return ERNUM;
      } else return SUCC;
    case '-':
      if (isdigit(getch())) {
        ungetch();
        push(-get_double());
        return SUCC;
      } else if (push(-(pop() - pop())) == -1) {
        return ERNUM;
      } else return SUCC;
    case '*':
      if (push(pop() * pop()) == -1) {
        return ERNUM;
      } else return SUCC;
    case '/':
      if ((temp = push(1 / (pop() / pop()))) == -1) {
        return ERNUM;
      } else if (temp == -2) {
        return EDIV0;
      } else return SUCC;
    case '%':
      if (push(mod(pop(), pop())) == -1) {
        return ERNUM;
      } else return SUCC;
    case '\n': {
      double d = pop();
      if (is_empty()) {
        if (!isnan(d)) printf("%lf\n", d);
        return SUCC;
      } else {
        return EROP;
      }
    }
    case ' ':return SUCC;
    case -1:return EEOF;
    default:
      if (temp >= '0' && temp <= '9') {
        ungetch();
        push(get_double());
        return SUCC;
      } else {
        return EUNK;
      }
  }
}
