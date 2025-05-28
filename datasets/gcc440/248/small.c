int printf(const char *, ...);
union {
  int a;
  unsigned b : 31;
} const c[10] = {3460281166};
int main() {
  int d = 0;
  for (; d < 5; d++) {
    printf("", c[d].a);
    printf("%d\n", c[d].b);
  }
  return 0;
}
