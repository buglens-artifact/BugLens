int printf(const char *, ...);
int a[4][10][6];
int b, c, d, e, g, i, j;
unsigned f;
int h[1];
static int *k() {
  f = 0;
  for (; f <= 3; f++) {
    b = 3;
    for (; b; b--) {
      a[b][5][f + 2] = 0 <= e;
      c = 0;
      for (; c <= 1; c++) {
        d = 7;
        for (; d; d--)
          a[f][d][4] ^= 3;
      }
    }
  }
  return h;
}
int main() {
  k();
  for (; g < 4; g++) {
    i = 0;
    for (; i < 10; i++) {
      j = 0;
      for (; j < 6; j++)
        printf("%d\n", a[g][i][j]);
    }
  }
}
