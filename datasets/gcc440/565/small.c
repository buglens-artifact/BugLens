int printf(const char *, ...);
union {
  int a;
  unsigned b : 21;
} const c[56] = {6951182};
int main() {
  int d = 0;
  for (; d < 8; d++) {
    printf("", c[d].a);
    printf("%d\n", c[d].b);
  }
  return 0;
}
