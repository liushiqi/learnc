//
// Created by liu on 18-11-11.
//

#include "2-8.h"

unsigned rightroc(unsigned x, unsigned n) {
  while (n--) { x = (x >> 1) | (x << (sizeof(unsigned) * 8 - 1)); }
  return x;
}
