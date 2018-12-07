//
// Created by liu on 18-12-7.
//

#include <string.h>
#include "4-1.h"

int *buildFail(char *str, int *fail) {
  int last = -1, len = (int) strlen(str);
  fail[0] = -1;
  for (int i = 1; i < len; ++i) {
    while (last != -1 && str[last] != str[i - 1]) last = fail[last];
    fail[i] = ++last;
  }
  return fail;
}

int kmpSearch(char *pattern, char *match, const int *fail) {
  int n = strlen(match), m = strlen(pattern), j = 0;
  for (int i = 0; i < n; ++i) {
    while (j > 0 && pattern[j] != match[i]) j = fail[j];
    if (pattern[j] == match[i]) ++j;
    if (j == m) return i - m + 1;
  }
  return -1;
}

int strrindex(char *s, char *t) {
  int fail[strlen(t)];
  int j = 0, p = -1;
  buildFail(t, fail);
  while ((j = kmpSearch(t, s + p + 1, fail)) != -1)
    p = j;
  return p;
}
