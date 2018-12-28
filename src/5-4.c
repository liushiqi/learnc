//
// Created by liu on 18-12-28.
//

#include <string.h>
#include "5-4.h"

int strend_helper(char *s, char *t, char *ts) {
  if (t == ts) return 1;
  else if (*s == *t) return strend_helper(s - 1, t - 1, ts);
  else return 0;
}

int strend(char s[], char t[]) {
  return strend_helper(s + strlen(s), t + strlen(t), t);
}
