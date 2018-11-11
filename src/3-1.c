//
// Created by liu on 18-11-11.
//

int binsearch(int x, int v[], int n) {
  int low = 0, high = n - 1, mid;
  while (low < high) {
    mid = (low + high) / 2;
    if (v[mid] >= x) {
      high = mid;
    } else {
      low = mid + 1;
    }
  }
  return v[low] == x ? low : -1;
}
