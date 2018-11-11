//
// Created by liu on 18-11-11.
//

unsigned rightroc(unsigned x, unsigned n) {
  while (n--) { x = (x >> 1) | (x << (sizeof(unsigned) * 8 - 1)); }
  return x;
}
