int printf(const char *, ...);
union {
  int a;
  unsigned b : 22;
} const c[9] = {4073709551615};
int main() {
  int d = 0;
  for (; d < 9; d++) {
    printf("", c[d].a);
    printf("%d\n", c[d].b);
  }
  return 0;
}
