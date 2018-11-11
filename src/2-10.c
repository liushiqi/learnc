//
// Created by liu on 18-11-11.
//

int lower(char c) {
  return c >= 'A' && c <= 'Z' ? c - 'A' + 'a' : c;
}