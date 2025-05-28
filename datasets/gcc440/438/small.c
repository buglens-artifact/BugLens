int printf(const char *, ...);
union {
  int a;
  unsigned b : 31;
} const c[5] = {-8L};
int main() {
  int d = 0;
  for (; d < 5; d++) {
    printf("", c[d].a);
    printf("%d\n", c[d].b);
  }
  return 0;
}
