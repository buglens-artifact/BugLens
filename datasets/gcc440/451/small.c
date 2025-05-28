int printf(const char *, ...);
union {
  int a;
  unsigned b : 23;
} static c[4] = {-7L};
int main() {
  int d = 0;
  for (; d < 4; d++) {
    printf("", c[d].a);
    printf("%X\n", c[d].b);
  }
  return 0;
}
