int printf(const char *, ...);
int a[4][8][8] = {{}, {{}, {}, {}, {}, 2, 4, 1, 8, 1, 4}};
int b, c, e, g, i, j;
int d[1];
short f;
char h;
static int *k() {
  for (; e <= 3; e++) {
    f = 0;
    for (; f <= 3; f++) {
      a[f][e + 3][f + 4] = b = 0;
      for (; b <= 3; b++) {
        c = 0;
        for (; c <= 1;
             c += (a[e][b + 1][b + 2] && (a[e][b + 1][b + 2] = e), h) <= 0)
          ;
      }
    }
  }
  return d;
}
int main() {
  k();
  for (; g < 4; g++) {
    i = 0;
    for (; i < 8; i++) {
      j = 0;
      for (; j < 8; j++)
        printf("%d\n", a[g][i][j]);
    }
  }
}
