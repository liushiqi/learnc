//
// Created by liu on 18-12-16.
//

#include "4-12.h"

int log_my(int n) {
  if (n == 0) return 0;
  else return log_my(n / 10) + 1;
}

void itoar(int n, char s[]) {
  if (n / 10) {
    itoar(n / 10, s - 1);
  }
  *s = (char) (n % 10 + '0');
}

void itoa(int n, char s[]) {
  if (n < 0) {
    n = -n;
    (s++)[0] = '-';
  }
  itoar(n, s + log_my(n) - 1);
  s[log_my(n)] = '\0';
}
