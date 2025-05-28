int printf(const char *, ...);
union {
  int a;
  signed b : 18;
} const c[6] = {988877};
int main() {
  int d = 0;
  for (; d < 4; d++) {
    printf("", c[d].a);
    printf("%d\n", c[d].b);
  }
  return 0;
}
