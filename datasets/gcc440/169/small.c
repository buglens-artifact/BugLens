int printf(const char *, ...);
union {
  int a;
  unsigned b : 29;
} const c[10] = {4265880752};
int main() {
  int d = 0;
  for (; d < 7; d++) {
    printf("", c[d].a);
    printf("%d\n", c[d].b);
  }
  return 0;
}
