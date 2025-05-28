int printf(const char *, ...);
union {
  int a;
  signed b : 24;
} static c[8] = {14030978};
int main() {
  int d = 0;
  for (; d < 8; d++) {
    printf("", c[d].a);
    printf("%d\n", c[d].b);
  }
  return 0;
}
