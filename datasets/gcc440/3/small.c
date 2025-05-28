int printf(const char *, ...);
union {
  int a;
  signed b : 30;
} const c[70] = {1483998086};
int main() {
  int d = 0;
  for (; d < 10; d++) {
    printf("", c[d].a);
    printf("%d\n", c[d].b);
  }
  return 0;
}
