int printf(const char *, ...);
union {
  int a;
  unsigned b : 24;
} static c[9] = {47671795};
int main() {
  int d = 0;
  for (; d < 9; d++) {
    printf("", c[d].a);
    printf("%d\n", c[d].b);
  }
  return 0;
}
