int printf(const char *, ...);
union {
  short a;
  unsigned b : 11;
} const c = {5279};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
