int printf(const char *, ...);
union {
  unsigned a : 26;
  signed b : 19;
} const c = {-1L};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
