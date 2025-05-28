int printf(const char *, ...);
union {
  int a;
  signed b : 27;
} const c[40] = {88480129};
int main() {
  int d = 0;
  for (; d < 10; d++) {
    printf("", c[d].a);
    printf("%d\n", c[d].b);
  }
  return 0;
}
