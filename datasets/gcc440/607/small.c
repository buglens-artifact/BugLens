int printf(const char *, ...);
union {
  char a;
  signed b : 5;
} const c[3] = {87};
int main() {
  int d = 0;
  for (; d < 3; d++) {
    printf("", c[d].a);
    printf("%d\n", c[d].b);
  }
  return 0;
}
