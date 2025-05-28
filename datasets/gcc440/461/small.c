int printf(const char *, ...);
union {
  int a;
  unsigned b : 17;
} const c[70] = {-10L};
int main() {
  int d = 0;
  for (; d < 5; d++) {
    printf("", c[d * 10].a);
    printf("%d\n", c[d * 10].b);
  }
  return 0;
}
