//
// Created by liu on 18-12-7.
//

#include "4-2.h"

double atof_my(char *s) {
  char *str = s;
  double value = 0.0;
  while (*str != '\0' && *str != '.' && *str != 'e' && *str != 'E') {
    value = value * 10 + *str - '0';
    ++str;
  }
  if (*str == '.') {
    double dot = 0.1;
    ++str;
    while (*str != '\0' && *str != 'e' && *str != 'E') {
      value += dot * (*str - '0');
      dot = dot / 10;
      ++str;
    }
  }
  if (*str == 'e' || *str == 'E') {
    int neg = 1;
    int e = 0;
    ++str;
    if (*str == '-') {
      neg = -1;
      ++str;
    }
    if (*str == '+') {
      neg = 1;
      ++str;
    }
    while (*str != '\0') {
      e = e * 10 + *str - '0';
      ++str;
    }
    for (int i = 0; i < e; ++i) {
      neg == 1 ? (value *= 10) : (value /= 10);
    }
  }
  return value;
}
