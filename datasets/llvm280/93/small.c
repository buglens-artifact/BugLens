int printf(const char *, ...);
int a[40];
static int b, c, d, e;
int main() {
  for (; b >= 0; b--)
    for (; c <= 4; c++)
      a[c * 5 + c] = ~a[5 + (b + 1) * 6 + (b + 1)];
  for (; d < 6; d++) {
    e = 0;
    for (; e < 8; e++)
      printf("%d\n", a[d * e]);
  }
}
