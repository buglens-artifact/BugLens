int printf(const char *, ...);
unsigned a;
char b;
int c[90];
short d, e;
int main() {
  a = 0;
  for (; a <= 3; a++) {
    d = 0;
    for (; d <= 8; d++) {
      c[d * 9 + d] = e = 3;
      for (; e; e--)
        c[(a + 1) * 9 + 4] = b |= ~c[d * 9 + d];
    }
  }
  printf("%d\n", b);
}
