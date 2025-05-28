int printf(const char *, ...);
union {
  unsigned a;
  unsigned b : 25;
} c = {41717211};
int main() {
  printf("%d\n", c.a, c.b);
  return 0;
}
