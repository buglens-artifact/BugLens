int printf(const char *, ...);
union {
  int a;
  unsigned b : 20;
} const c = {4967286};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
