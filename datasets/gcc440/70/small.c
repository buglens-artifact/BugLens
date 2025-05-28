int printf(const char *, ...);
union {
  int a;
  unsigned b : 30;
} const c[2] = {-4L};
int main() {
  int d = 0;
  for (; d < 2; d++) {
    printf("", c[d].a);
    printf("%d\n", c[d].b);
  }
  return 0;
}
