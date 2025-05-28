int printf(const char *, ...);
short a[2][9][4];
int b, d, e, f;
char c;
int main() {
  a[1][2][1] = 5;
  for (; c <= 6; c++) {
    b = 0;
    for (; b <= 1; b++)
      a[1][c][1 + 1] = a[1][b + 2][b + 1];
  }
  for (; d < 2; d++) {
    e = 0;
    for (; e < 9; e++)
      f = printf("%d\n", a[d][e][f]);
  }
}
