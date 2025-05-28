int printf(const char *, ...);
int a[4][8][5];
short b, c;
int d, e, f, g;
int main() {
  for (; c <= 6; c++) {
    d = 0;
    for (; d <= 3; d++) {
      b = 0;
      for (; b <= 3; b++)
        a[d][d][d] ^= a[d][c][1] = 6;
    }
  }
  for (; e < 4; e++) {
    f = 0;
    for (; f < 8; f++) {
      g = 0;
      for (; g < 5; g++)
        printf("%d\n", a[e][f][g]);
    }
  }
}
