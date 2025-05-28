int printf(const char *, ...);
int a[3][7][8];
long b;
char c;
short d, e;
int f, g, i;
int main() {
  for (; b <= 2; b++) {
    int *h = &a[2][1][6];
    *h = d = 2;
    e = 0;
    for (; e <= 2; e++)
      a[d][e][d + 4] = c;
  }
  for (; f < 3; f++) {
    g = 0;
    for (; g < 7; g++) {
      i = 0;
      for (; i < 8; i++)
        printf("%d\n", a[f][g][i]);
    }
  }
}
