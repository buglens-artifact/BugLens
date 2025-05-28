int printf(const char *, ...);
int a[1][4][6];
int b, e, f;
char c, d;
int main() {
  for (; d <= 2; d++) {
    c = 0;
    for (; c <= 0; c++) {
      b = 0;
      for (; b <= 2; b++) {
        a[c][d + 1][d] = 4;
        a[c][d + 1][1] = 0;
      }
    }
  }
  for (; e < 4; e++) {
    f = 0;
    for (; f < 6; f++)
      printf("%d\n", a[0][e][f]);
  }
}
