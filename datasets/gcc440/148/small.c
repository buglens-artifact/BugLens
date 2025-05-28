int printf(const char *, ...);
union {
  short a;
  unsigned b : 9;
} static c[32] = {-7L};
int main() {
  int d = 0;
  for (; d < 8; d++) {
    printf("", c[d].a);
    printf("%d\n", c[d].b);
  }
  return 0;
}
