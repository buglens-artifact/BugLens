int printf(const char *, ...);
union {
  int a;
  unsigned b : 24;
} const c[72] = {44640693};
int main() {
  int d = 0;
  for (; d < 8; d++) {
    printf("%d\n", c[d].b);
  }
  return 0;
}



