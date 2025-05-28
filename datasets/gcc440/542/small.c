int printf(const char *, ...);
union {
  int a;
  unsigned b : 20;
} c = {5833067};
int main() {
  printf("%d\n", c.a, c.b);
  return 0;
}
