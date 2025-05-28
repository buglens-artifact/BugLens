int printf(const char *, ...);
union {
  unsigned a;
  signed b : 31;
} const c = {2145466306};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
