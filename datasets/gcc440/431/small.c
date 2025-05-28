int printf(const char *, ...);
union {
  int a;
  unsigned b : 22;
} const c[7] = {7632098};
int main() {
  int d = 0;
  for (; d < 7; d++) {
    printf("", c[d].a);
    printf("%d\n", c[d].b);
  }
  return 0;
}
