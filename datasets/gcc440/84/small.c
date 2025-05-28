int printf(const char *, ...);
union {
  int a;
  unsigned b : 21;
} const c = {2158328};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
