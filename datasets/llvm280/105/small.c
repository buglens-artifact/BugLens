int printf(const char *, ...);
char a[6][5][5];
int b, e, f, g;
char c;
long d;
int main() {
  for (; c <= 2; c++)
    ;
  for (; b <= 4; b++) {
    d = 1;
    for (; d <= 4; d++)
      a[b + 1][d][b] = 0;
    --a[4 + 1][c][4];
  }
  for (; e < 5; e++)
    ;
  for (; f < 5; f++) {
    g = 0;
    for (; g < 5; g++)
      printf("%d\n", a[e][f][g]);
  }
}
