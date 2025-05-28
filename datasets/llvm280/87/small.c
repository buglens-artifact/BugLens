int printf(const char *, ...);
int a[][4][1] = {{}, {}, {}, {}};
int b, c, d, e, f, g;
void h() {
  b = 2;
  for (; b; b--) {
    c = 0;
    for (; c <= 2; c++) {
      d = 5;
      for (; d; d--) {
        e = 0;
        for (; e >= 0; e--)
          a[b + 1][3][e] = 3;
      }
      a[c + 1][b + 1][0] &= 6;
    }
  }
}
int main() {
  h();
  for (; f < 4; f++) {
    g = 0;
    for (; g < 4; g++)
      printf("%d\n", a[f][g][0]);
  }
}
