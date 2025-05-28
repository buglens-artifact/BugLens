int printf(const char *, ...);
union {
  short a;
  unsigned b : 13;
} const c[6] = {8904};
int main() {
  int d = 0;
  for (; d < 6; d++) {
    printf("", c[d].a);
    printf("%d\n", c[d].b);
  }
  return 0;
}
