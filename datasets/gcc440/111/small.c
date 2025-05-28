int printf(const char *, ...);
union {
  signed a;
  unsigned b : 24;
} const c[7] = {93183033};
int main() {
  int d = 0;
  for (; d < 7; d++) {
    printf("", c[d].a);
    printf("%d\n", c[d].b);
  }
  return 0;
}
