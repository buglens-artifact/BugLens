int printf(const char *, ...);
int a[5][9];
unsigned b;
int c, d, e, f;
static int g() {
  b = 1;
  for (; b; b++)
    for (; c <= 4; c++) {
      a[c][b] = d = 0;
      for (; d <= 8; d++)
        a[b][d] ^= 1;
    }
  return 7;
}
int main() {
  g();
  for (; e < 5; e++) {
    f = 0;
    for (; f < 9; f++)
      printf("%d\n", a[e][f]);
  }
}
