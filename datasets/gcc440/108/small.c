int printf(const char *, ...);
union {
  int a;
  signed b : 20;
} const c[105] = {1298267};
int main() {
  int d = 0;
  for (; d < 7; d++) {
    printf("", c[d].a);
    printf("%d\n", c[d].b);
  }
  return 0;
}
