int printf(const char *, ...);
int a[6][4];
char b;
int c, d, e;
int main() {
  b = 3;
  for (; b; b--) {
    c = 1;
    for (; c <= 6; c++)
      a[b][b] = ~a[b][1];
  }
  for (; d < 6; d++) {
    e = 0;
    for (; e < 4; e++)
      printf("%d\n", a[d][e]);
  }
}
