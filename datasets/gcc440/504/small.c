int printf(const char *, ...);
union {
  int a;
  unsigned b : 28;
} c = {4036432510};
int main() {
  printf("%d\n", c.a, c.b);
  return 0;
}
