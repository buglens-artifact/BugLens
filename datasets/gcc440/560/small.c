int printf(const char *, ...);
union {
  int a;
  signed b : 31;
} const c[3] = {2940772576};
int main() {
  int d = 0;
  for (; d < 3; d++) {
    printf("", c[d].a);
    printf("%d\n", c[d].b);
  }
  return 0;
}
