int printf(const char *, ...);
union {
  short a;
  signed b : 9;
} const c[18] = {761};
int main() {
  int d = 0;
  for (; d < 9; d++) {
    printf("", c[d].a);
    printf("%d\n", c[d].b);
  }
  return 0;
}
