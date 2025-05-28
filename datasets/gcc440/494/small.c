int printf(const char *, ...);
union {
  char a;
  signed b : 1;
} const c[4] = {2};
int main() {
  int d = 0;
  for (; d < 4; d++) {
    printf("", c[d].a);
    printf("%d\n", c[d].b);
  }
  return 0;
}
