int printf(const char *, ...);
char a[][7][3] = {{{}, {}, 2, 5}};
long b;
int c, d, e;
int main() {
  b = c = 1;
  for (; c >= 0; c--)
    a[0][b + 1][b] = a[0][c + 2][1];
  for (; d < 7; d++) {
    e = 0;
    for (; e < 3; e++)
      printf("%d\n", a[0][d][e]);
  }
}
