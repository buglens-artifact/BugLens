int printf(const char *, ...);
union {
  int a;
  unsigned b : 28;
} static c[10] = {274939248};
int main() {
  int d = 0;
  for (; d < 10; d++) {
    printf("", c[d].a);
    printf("%d\n", c[d].b);
  }
  return 0;
}
