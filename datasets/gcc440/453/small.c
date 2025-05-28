int printf(const char *, ...);
union {
  int a;
  unsigned b : 25;
} static c[21] = {109081848};
int main() {
  int d = 0;
  for (; d < 3; d++) {
    printf("", c[d].a);
    printf("%d\n", c[d].b);
  }
  return 0;
}
