int printf(const char *, ...);
union {
  int a;
  unsigned b : 19;
} static c[8] = {-1L};
int main() {
  int d = 0;
  for (; d < 7; d++) {
    printf("", c[d].a);
    printf("%d\n", c[d].b);
  }
  return 0;
}
