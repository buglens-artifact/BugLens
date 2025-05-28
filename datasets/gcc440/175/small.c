int printf(const char *, ...);
union {
  int a;
  unsigned b : 22;
} static c[5] = {204076465};
int main() {
  int d = 0;
  for (; d < 5; d++) {
    printf("", c[d].a);
    printf("%d\n", c[d].b);
  }
  return 0;
}
