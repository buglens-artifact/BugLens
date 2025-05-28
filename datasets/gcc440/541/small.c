int printf(const char *, ...);
union {
  int a;
  unsigned b : 19;
} static c[6] = {1012343};
int main() {
  int d = 0;
  for (; d < 3; d++) {
    printf("", c[d].a);
    printf("%d\n", c[d].b);
  }
  return 0;
}
