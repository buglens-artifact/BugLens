int printf(const char *, ...);
union {
  int a;
  unsigned b : 18;
} static c[3] = {4073709551615};
int main() {
  int d = 0;
  for (; d < 3; d++) {
    printf("", c[d].a);
    printf("%d\n", c[d].b);
  }
  return 0;
}
