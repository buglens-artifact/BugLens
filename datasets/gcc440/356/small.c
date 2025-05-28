int printf(const char *, ...);
union {
  signed a : 16;
  unsigned b : 13;
} static c[4] = {55365};
int main() {
  int d = 0;
  for (; d < 3; d++) {
    printf("", c[d].a);
    printf("%d\n", c[d].b);
  }
  return 0;
}
