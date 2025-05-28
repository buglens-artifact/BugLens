int printf(const char *, ...);
union {
  int a;
  signed b : 25;
} static c[12] = {27345345};
int main() {
  int d = 0;
  for (; d < 6; d++) {
    printf("", c[d].a);
    printf("%d\n", c[d].b);
  }
  return 0;
}
