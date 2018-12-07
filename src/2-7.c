//
// Created by liu on 18-11-11.
//

#include "2-7.h"

unsigned invert(unsigned x, unsigned p, unsigned n) {
  return ((~(~(-1u << n) << (p - n + 1)) & x) | (~x & ((1u << n) - 1) << (p - n + 1)));
}
