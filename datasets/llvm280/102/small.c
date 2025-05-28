int printf(const char *, ...);
long a, d, f;
int b, e, g, h, i;
int c[5][4][1];
static unsigned short j() {
  for (; g < 2; g++) {
    b = 2;
    for (; b >= 0; b--) {
      e = 0;
      for (; e <= 0; e++) {
        for (; g < 1; g++)
          ;
        f = 0;
        for (; f <= 3; f++) {
          d = c[b + 2][b][e] == 0 ?: a % c[b + 2][b][e];
          c[b + 2][f][e] = d;
        }
      }
    }
  }
  return e;
}
int main() {
  j();
  for (; h < 5; h++)
    i = printf("%d\n", c[h][i][0]);
}
