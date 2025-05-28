int printf(const char *, ...);
union {
  int a;
  signed b : 23;
} const c = {4915683};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
