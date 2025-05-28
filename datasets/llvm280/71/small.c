int printf(const char *, ...);
int a[10][8][3];
int b, c, d, e, g, h;
char f;
static unsigned i() {
  for (; f <= 2; f += 1) {
    b = 3;
    for (; b; b--) {
      c = 0;
      for (; c <= 4; c++) {
        d = 0;
        for (; d <= 2; d++)
          a[1][f + 4][1] |= f;
        a[1][b + 2][f] = 3;
      }
    }
  }
  return f;
}
int main() {
  i();
  for (; e < 4; e++) {
    g = 0;
    for (; g < 8; g++) {
      h = 0;
      for (; h < 3; h++)
        printf("%d\n", a[e][g][h]);
    }
  }
}
