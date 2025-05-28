int printf(const char *, ...);
union {
  int a;
  signed b : 31;
} static c[10] = {1393317085};
int main() {
  int d = 0;
  for (; d < 9; d++) {
    printf("", c[d].a);
    printf("%d\n", c[d].b);
  }
  return 0;
}
