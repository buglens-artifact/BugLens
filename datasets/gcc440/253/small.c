int printf(const char *, ...);
union {
  short a;
  signed b : 11;
} c = {3710};
int main() {
  printf("%d\n", c.a, c.b);
  return 0;
}
