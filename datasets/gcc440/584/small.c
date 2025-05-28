int printf(const char *, ...);
union {
  int a;
  unsigned b : 24;
} static c = {87401441};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
