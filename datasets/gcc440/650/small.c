int printf(const char *, ...);
union {
  char a;
  unsigned b : 5;
} const c[9] = {34};
int main() {
  int d = 0;
  for (; d < 9; d++) {
    printf("", c[d].a);
    printf("%d\n", c[d].b);
  }
  return 0;
}
