int printf(const char *, ...);
union {
  char a;
  unsigned b : 6;
} const c[7] = {126};
int main() {
  int d = 0;
  for (; d < 7; d++) {
    printf("", c[d].a);
    printf("%d\n", c[d].b);
  }
  return 0;
}
