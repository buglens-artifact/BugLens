int printf(const char *, ...);
union {
  int a;
  unsigned b : 23;
} const c[5] = {94967294};
int main() {
  int d = 0;
  for (; d < 5; d++) {
    printf("", c[d].a);
    printf("%d\n", c[d].b);
  }
  return 0;
}
