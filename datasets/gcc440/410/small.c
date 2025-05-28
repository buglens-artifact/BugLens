int printf(const char *, ...);
union {
  int a;
  unsigned b : 31;
} static c[2] = {-1L};
int main() {
  int d = 0;
  for (; d < 2; d++) {
    printf("", c[d].a);
    printf("%d\n", c[d].b);
  }
  return 0;
}
