int printf(const char *, ...);
union {
  int a;
  unsigned b : 17;
} const c[2] = {967295};
int main() {
  int d = 0;
  for (; d < 2; d++) {
    printf("", c[d].a);
    printf("%d\n", c[d].b);
  }
  return 0;
}
