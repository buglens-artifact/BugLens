int printf(const char *, ...);
union {
  short a;
  signed b : 9;
} static c[36] = {311};
int main() {
  int d = 0;
  for (; d < 9; d++) {
    printf("", c[d].a);
    printf("%d\n", c[d].b);
  }
  return 0;
}
