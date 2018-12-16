//
// Created by liu on 18-12-16.
//

#include <string.h>
#include "4-13.h"

void revert_helper(char *s1, char *s2) {
  if  (s1 > s2)
    ; // EMPTY
  else {
    revert_helper(s1 + 1, s2 - 1);
    char a = *s2;
    *s2 = *s1;
    *s1 = a;
  }
}

void revert(char s[]) {
  revert_helper(s, s + strlen(s) - 1);
}
