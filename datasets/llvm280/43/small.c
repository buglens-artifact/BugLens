int printf(const char *, ...);
int a, c, g, h;
short b, e;
char d;
short f[7][9];
void i() {
  for (; e <= 6; e += 1) {
    c = 0;
    for (; c <= 3; c++) {
      b = 2;
      for (; b; b++) {
        a = 2;
        for (; a; a--) {
          f[e][e] = d = 2;
          for (; d <= 6; d++)
            f[c + 3][d] = 9;
        }
      }
    }
  }
}
int main() {
  i();
  for (; g < 7; g++) {
    h = 0;
    for (; h < 9; h++)
      printf("%d\n", f[g][h]);
  }
}
