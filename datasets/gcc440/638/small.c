int printf(const char *, ...);
union {
  short a;
  unsigned b : 10;
} static c[8] = {3330};
int main() {
  int d = 0;
  for (; d < 7; d++) {
    printf("", c[d].a);
    printf("%d\n", c[d].b);
  }
  return 0;
}
