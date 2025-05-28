int printf(const char *, ...);
union {
  int a;
  unsigned b : 30;
} const c[64] = {4294967295};
int main() {
  int d = 0;
  for (; d < 8; d++) {
    printf("", c[d].a);
    printf("%d\n", c[d].b);
  }
  return 0;
}
