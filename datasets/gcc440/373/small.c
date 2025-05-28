int printf(const char *, ...);
union {
  int a;
  unsigned b : 21;
} static c[4] = {6247160};
int main() {
  int d = 0;
  for (; d < 4; d++) {
    printf("", c[d].a);
    printf("%d\n", c[d].b);
  }
  return 0;
}
