int printf(const char *, ...);
union {
  int a;
  unsigned b : 18;
} const c = {623915};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
