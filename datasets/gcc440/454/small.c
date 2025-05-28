int printf(const char *, ...);
union {
  int a;
  unsigned b : 20;
} const c[4] = {4073709551615};
int main() {
  int d = 0;
  for (; d < 2; d++) {
    printf("", c[d].a);
    printf("%d\n", c[d].b);
  }
  return 0;
}
