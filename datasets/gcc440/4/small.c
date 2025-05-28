int printf(const char *, ...);
union {
  int a;
  unsigned b : 22;
} const c = {12953210};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
