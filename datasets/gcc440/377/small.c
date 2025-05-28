int printf(const char *, ...);
union {
  int a;
  unsigned b : 26;
} static c[8] = {97868213};
int main() {
  int d = 0;
  for (; d < 8; d++) {
    printf("", c[d].a);
    printf("%d\n", c[d].b);
  }
  return 0;
}
