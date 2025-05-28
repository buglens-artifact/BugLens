int printf(const char *, ...);
union {
  int a;
  signed b : 30;
} const c[5] = {3402004542};
int main() {
  int d = 0;
  for (; d < 2; d++) {
    printf("", c[d].a);
    printf("%d\n", c[d].b);
  }
  return 0;
}
