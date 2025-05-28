int printf(const char *, ...);
union {
  int a;
  unsigned b : 25;
} c = {-1L};
int main() {
  printf("%d\n", c.a, c.b);
  return 0;
}
