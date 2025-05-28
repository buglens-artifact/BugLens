int printf(const char *, ...);
union {
  int a;
  signed b : 30;
} static c[42] = {780915477};
int main() {
  int d = 0;
  for (; d < 7; d++) {
    printf("", c[d].a);
    printf("%d\n", c[d].b);
  }
  return 0;
}
