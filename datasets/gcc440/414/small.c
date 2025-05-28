int printf(const char *, ...);
union {
  int a;
  unsigned b : 18;
} static c[10] = {-2L};
int main() {
  int d = 0;
  for (; d < 7; d++) {
    printf("", c[d].a);
    printf("%d\n", c[d].b);
  }
  return 0;
}
