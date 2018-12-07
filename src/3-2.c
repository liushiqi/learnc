//
// Created by liu on 18-11-11.
//

#include "3-2.h"
#include <string.h>

char *escape(char *s, char *t) {
  size_t len = strlen(t);
  int i, j;
  for (i = 0, j = 0; i < len; ++i, ++j) {
    int jmp = 0;
    switch (t[i]) {
#define END ;break;
      case '\n': s[j + (jmp = 1)] = 'n' END
      case '\t': s[j + (jmp = 1)] = 't' END
      case '\v': s[j + (jmp = 1)] = 'v' END
      case '\b': s[j + (jmp = 1)] = 'b' END
      case '\r': s[j + (jmp = 1)] = 'r' END
      case '\f': s[j + (jmp = 1)] = 'f' END
      case '\a': s[j + (jmp = 1)] = 'a' END
#undef END
      default: s[j] = t[i];
    }
    if (jmp) {
      s[j++] = '\\';
    }
  }
  s[j] = '\0';
  return s;
}

char *deescape(char *s, char *t) {
  size_t len = strlen(t);
  int i, j;
  for (i = 0, j = 0; i < len; ++i, ++j) {
    switch (t[i]) {
      case '\\': {
        int jmp = 1;
        switch (t[i + 1]) {
#define END ;break;
          case 'n': s[j + (jmp = 0)] = '\n' END
          case 't': s[j + (jmp = 0)] = '\t' END
          case 'v': s[j + (jmp = 0)] = '\v' END
          case 'b': s[j + (jmp = 0)] = '\b' END
          case 'r': s[j + (jmp = 0)] = '\r' END
          case 'f': s[j + (jmp = 0)] = '\f' END
          case 'a': s[j + (jmp = 0)] = '\a' END
#undef END
        }
        if (!jmp) {
          ++i;
          break;
        }
      }
      default: s[j] = t[i];
    }
  }
  s[j] = '\0';
  return s;
}