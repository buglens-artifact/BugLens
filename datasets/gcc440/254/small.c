int printf(const char *, ...);
union {
  int a;
  unsigned b : 27;
} static c[90] = {-5L};
int main() {
  int d = 0;
  for (; d < 10; d++) {
    printf("", c[d].a);
    printf("%d\n", c[d].b);
  }
  return 0;
}
