int printf(const char *, ...);
int a[3][9] = {7};
int b, c, d;
static short e() {
  b = 2;
  for (; b >= 0; b--) {
    c = 0;
    for (; c <= 7; c++) {
      a[b][c] = -(short)a[b][b];
      a[b][1] = a[b][b];
    }
  }
  return 0;
}
int main() {
  e();
  for (; d < 9; d++)
    printf("%d\n", a[0][d]);
}
