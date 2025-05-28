int printf(const char *, ...);
union {
  char a;
  signed b : 4;
} const c[5] = {13};
int main() {
  int d = 0;
  for (; d < 5; d++) {
    printf("", c[d].a);
    printf("%d\n", c[d].b);
  }
  return 0;
}
