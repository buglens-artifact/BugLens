int printf(const char *, ...);
int a[63];
short b;
short c[7][8];
int d, e;
static int g() {
  char f;
  for (; b <= 6; b++) {
    d = 0;
    for (; d <= 3; d++) {
      f = 0;
      for (; f <= 4; f++)
        c[d][f + 3] ^= d;
      for (; f; f++)
        a[b] = c[b][b];
    }
  }
  return 8;
}
int main() {
  g();
  for (; e < 9; e++)
    printf("%d\n", a[e]);
}
