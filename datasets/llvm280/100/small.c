int printf(const char *, ...);
long a;
int b[36];
int c, d, e, f;
int main() {
  c = 5;
  for (; c; c--) {
    d = 0;
    for (; d <= 5; d++) {
      b[c * 6 + 1] = ~0;
      b[c * 6 + c] |= a;
    }
  }
  for (; e < 6; e++)
    ;
  for (; f < 6; f++)
    printf("%d\n", b[e + f]);
}
