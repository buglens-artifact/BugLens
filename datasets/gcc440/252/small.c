int printf(const char *, ...);
union {
  int a;
  unsigned b : 30;
} static c[7] = {2749400822};
int main() {
  int d = 0;
  for (; d < 7; d++) {
    printf("", c[d].a);
    printf("%d\n", c[d].b);
  }
  return 0;
}
