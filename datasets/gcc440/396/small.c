int printf(const char *, ...);
union {
  int a;
  signed b : 18;
} static c[9] = {352392};
int main() {
  int d = 0;
  for (; d < 7; d++) {
    printf("", c[d].a);
    printf("%d\n", c[d].b);
  }
  return 0;
}
