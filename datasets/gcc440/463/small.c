int printf(const char *, ...);
union {
  int a;
  signed b : 20;
} static c[4] = {539013};
int main() {
  int d = 0;
  for (; d < 4; d++) {
    printf("", c[d].a);
    printf("%d\n", c[d].b);
  }
  return 0;
}
