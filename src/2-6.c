//
// Created by liu on 18-11-11.
//

unsigned setbits(unsigned x, unsigned p, unsigned n, unsigned y) {
  return ((~(~(-1u << n) << (p - n + 1)) & x) | ((y & ((1u << n) - 1)) << (p - n + 1)));
}
