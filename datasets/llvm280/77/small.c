int printf(const char *, ...);
int a, c, d, e, f, h, l;
short b[4][8];
long g;
void m() {
  for (; c <= 3; c++) {
    int i[9];
    char j = e = 0;
    for (; e <= 3; e++) {
      f = 3;
      for (; f; f--) {
        d = 3;
        for (; d >= 0; d--) {
          short *k = &b[c][e];
          b[e][3] = a;
          j |= (i[4] ^= g) - (*k = 65532);
        }
      }
    }
  }
}
int main() {
  m();
  for (; h < 4; h++)
    l = printf("%d\n", b[h][l]);
}
