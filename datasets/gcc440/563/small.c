int printf(const char *, ...);
union {
  int a;
  signed b : 21;
} static c[20] = {6524639};
int main() {
  int d = 0;
  for (; d < 10; d++) {
    printf("", c[d].a);
    printf("%d\n", c[d].b);
  }
  return 0;
}
