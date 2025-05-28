int printf(const char *, ...);
union {
  int a;
  unsigned b : 21;
} static c[9] = {11204765};
int main() {
  int d = 0;
  for (; d < 7; d++) {
    printf("", c[d].a);
    printf("%d\n", c[d].b);
  }
  return 0;
}
