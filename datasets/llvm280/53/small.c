int printf(const char *, ...);
int a[10][5];
int b[][10][10] = {{}, {{}, {}, 6}};
int c, d, e, f, i, j;
short g;
unsigned h;
static int *k() {
  e = 5;
  for (; e; e--) {
    g = 0;
    for (; g <= 1; g++) {
      c = 1;
      for (; c <= 4; c++) {
        a[e][1] = b[g][e + 4][e + 3];
        h = 0;
        for (; h <= 2; h++) {
          d = 1;
          for (; d; d--)
            b[g][e + 4][g + 4] = b[g][e][0];
        }
      }
    }
  }
  return &f;
}
int main() {
  k();
  for (; i < 10; i++) {
    j = 0;
    for (; j < 5; j++)
      printf("%d\n", a[i][j]);
  }
}
