int printf(const char *, ...);
union {
  int a;
  signed b : 22;
} const c[4] = {5784750};
int main() {
  int d = 0;
  for (; d < 4; d++) {
    printf("", c[d].a);
    printf("%d\n", c[d].b);
  }
  return 0;
}
