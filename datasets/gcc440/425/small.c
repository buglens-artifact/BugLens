int printf(const char *, ...);
union {
  int a;
  unsigned b : 31;
} const c = {3700556199};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
