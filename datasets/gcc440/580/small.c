int printf(const char *, ...);
union {
  int a;
  unsigned b : 29;
} static c[50] = {-1L};
int main() {
  int d = 0;
  for (; d < 5; d++) {
    printf("", c[d].a);
    printf("%d\n", c[d].b);
  }
  return 0;
}
