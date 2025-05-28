int printf(const char *, ...);
union {
  signed a;
  signed b : 21;
} static c[3] = {1966968};
int main() {
  int d = 0;
  for (; d < 3; d++) {
    printf("", c[d].a);
    printf("%d\n", c[d].b);
  }
  return 0;
}
