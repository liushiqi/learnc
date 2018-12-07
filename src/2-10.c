//
// Created by liu on 18-11-11.
//

#include "2-10.h"

int lower(char c) {
  return c >= 'A' && c <= 'Z' ? c - 'A' + 'a' : c;
}
