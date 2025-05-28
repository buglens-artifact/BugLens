int printf(const char *, ...);
union {
  int a;
  signed b : 24;
} static c[6] = {8532872};
int main() {
  int d = 0;
  for (; d < 6; d++) {
    printf("", c[d].a);
    printf("%d\n", c[d].b);
  }
  return 0;
}
