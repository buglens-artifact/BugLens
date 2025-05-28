int printf(const char *, ...);
union {
  short a;
  signed b : 10;
} const c[6] = {1025};
int main() {
  int d = 0;
  for (; d < 6; d++) {
    printf("", c[d].a);
    printf("%d\n", c[d].b);
  }
  return 0;
}
