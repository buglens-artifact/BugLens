int printf(const char *, ...);
union {
  short a;
  signed b : 13;
} static c[21] = {9913};
int main() {
  int d = 0;
  for (; d < 7; d++) {
    printf("", c[d].a);
    printf("%d\n", c[d].b);
  }
  return 0;
}
