int printf(const char *, ...);
union {
  int a;
  unsigned b : 29;
} const c[5] = {4224437685};
int main() {
  int d = 0;
  for (; d < 4; d++) {
    printf("", c[d].a);
    printf("%d\n", c[d].b);
  }
  return 0;
}
