int printf(const char *, ...);
union {
  int a;
  signed b : 17;
} static c[9] = {94122};
int main() {
  int d = 0;
  for (; d < 9; d++) {
    printf("", c[d].a);
    printf("%d\n", c[d].b);
  }
  return 0;
}
