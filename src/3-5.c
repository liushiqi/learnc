//
// Created by liu on 18-11-23.
//

const char digits[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";

void reserve(char s[]) {
  size_t i = strlen(s);
  for (size_t j = 0, h = i - 1; j < h; ++j, --h) {
    char tmp = s[h];
    s[h] = s[j];
    s[j] = tmp;
  }
}

int itob(int n, char s[], int b) {
  if (b < 2 || b > 36)
    return -1;
  int i;
  for (i = 0; n > 0; ++i, n /= b) {
    s[i] = digits[n % b];
  }
  s[i] = '\0';
  reserve(s);
  return 0;
}