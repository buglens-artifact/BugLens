int printf(const char *, ...);
int a[3][25];
int b, c, d, f, g, h, i;
short e;
int main() {
  for (; b <= 2; b++) {
    c = 0;
    for (; c <= 2; c++) {
      d = 2;
      for (; d; d--) {
        f = 2;
        for (; f >= 0; f--)
          a[b][(c + 1) * 5 + 1] = ~(e ^= a[c][(c + 1) * 5 + c]);
      }
    }
  }
  for (; g < 3; g++) {
    h = 0;
    for (; h < 5; h++)
      i = printf("%d\n", a[g][h * i]);
  }
}
