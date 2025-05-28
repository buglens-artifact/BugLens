int printf(const char *, ...);
union {
  char a;
  unsigned b : 6;
} const c[4] = {159};
int main() {
  int d = 0;
  for (; d < 4; d++) {
    printf("", c[d].a);
    printf("%X\n", c[d].b);
  }
  return 0;
}
