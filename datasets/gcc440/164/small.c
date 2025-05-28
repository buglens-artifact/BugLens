int printf(const char *, ...);
union {
  int a;
  unsigned b : 28;
} static c[5] = {46744073709551606};
int main() {
  int d = 0;
  for (; d < 5; d++) {
    printf("", c[d].a);
    printf("%d\n", c[d].b);
  }
  return 0;
}
