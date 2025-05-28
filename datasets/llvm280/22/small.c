int printf(const char *, ...);
char a, e;
int b, i, j, k;
int c[5][7][6];
long d, g;
short f = 6, h;
static char l() {
  for (; a <= 2; a++) {
    d = 0;
    for (; d <= 2; d++) {
      h = 0;
      for (; h <= 2; h++) {
        b = 2;
        for (; b >= 0; b--)
          c[h][a + 3][2] ^= f &= 3;
        c[e][d + 3][d] = 0;
      }
    }
  }
  return g;
}
int main() {
  l();
  for (; j < 7; j++)
    k = printf("%d\n", c[i][j][k]);
}
