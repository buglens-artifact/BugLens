int printf(const char *, ...);
union {
  int a;
  signed b : 29;
} static c[6] = {282685397};
int main() {
  int d = 0;
  for (; d < 6; d++) {
    printf("", c[d].a);
    printf("%d\n", c[d].b);
  }
  return 0;
}
