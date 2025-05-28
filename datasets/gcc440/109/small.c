int printf(const char *, ...);
union {
  int a;
  unsigned b : 27;
} const c[8] = {261569753};
int main() {
  int d = 0;
  for (; d < 8; d++) {
    printf("", c[d].a);
    printf("%d\n", c[d].b);
  }
  return 0;
}
