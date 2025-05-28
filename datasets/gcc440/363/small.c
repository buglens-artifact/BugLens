int printf(const char *, ...);
union {
  unsigned a : 29;
  signed b : 27;
} c = {-1L};
int main() {
  printf("%d\n", c.a, c.b);
  return 0;
}
