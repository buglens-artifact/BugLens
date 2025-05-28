int printf(const char *, ...);
union {
  int a;
  unsigned b : 29;
} const c[10] = {813202253};
int main() {
  int d = 0;
  for (; d < 10; d++) {
    printf("", c[d].a);
    printf("%d\n", c[d].b);
  }
  return 0;
}
