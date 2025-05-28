int printf(const char *, ...);
union {
  int a;
  unsigned b : 30;
} const c[60] = {4294967288};
int main() {
  int d = 0;
  for (; d < 10; d++) {
    printf("", c[d].a);
    printf("%d\n", c[d].b);
  }
  return 0;
}
