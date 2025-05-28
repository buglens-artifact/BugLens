int printf(const char *, ...);
union {
  int a;
  signed b : 18;
} const c[21] = {1061251};
int main() {
  int d = 0;
  for (; d < 3; d++) {
    printf("", c[d].a);
    printf("%d\n", c[d].b);
  }
  return 0;
}
