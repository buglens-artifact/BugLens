int printf(const char *, ...);
union {
  int a;
  signed b : 30;
} static c[][5][1] = {2524833665};
int main() {
  int d = 0;
  for (; d < 5; d++) {
    printf("", c[0][d][0].a);
    printf("%X\n", c[0][d][0].b);
  }
  return 0;
}
