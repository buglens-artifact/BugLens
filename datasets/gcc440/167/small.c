int printf(const char *, ...);
short a, c, d;
int b;
int *e = &b;
int main() {
  unsigned char f;
  d = a << 8;
  c = d > 0 ? 0 : d;
  f = c + 253;
  *e = f;
  printf("%d\n", b);
  return 0;
}
