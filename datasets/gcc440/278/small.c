int printf(const char *, ...);
union {
  int a;
  unsigned b : 21;
} c;
int main() {
  c.a |= -6L;
  printf("%d\n", c.b);
  return 0;
}
