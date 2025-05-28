int printf(const char *, ...);
int a[7][3][8] = {{}, {}, {}, {}, {}, {{}, 2, 1, 1}};
int b, f, g, i, j;
long c;
char d, e;
void k() {
  c = 0;
  for (; c <= 3; c++) {
    b = 0;
    for (; b <= 2; b++) {
      long h[3];
      f = 0;
      for (; f < 3; f++)
        h[f] = d = 3;
      for (; d; d--)
        f = 0;
      for (; f < 1;)
        for (; f < 5; f++) {
          e = 0;
          for (; e <= 2; e++)
            a[c + 3][e][2] &= h[2] && h[0];
        }
      a[b + 4][b][c] = 0;
    }
  }
}
int main() {
  k();
  for (; g < 7; g++) {
    i = 0;
    for (; i < 3; i++)
      j = printf("%d\n", a[g][i][j]);
  }
}
