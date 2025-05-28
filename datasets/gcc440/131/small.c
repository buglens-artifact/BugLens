int printf(const char *, ...);
union {
  short a;
  signed b : 12;
} const c[10] = {3926};
int main() {
  int d = 0;
  for (; d < 6; d++) {
    printf("", c[d].a);
    printf("%d\n", c[d].b);
  }
  return 0;
}
