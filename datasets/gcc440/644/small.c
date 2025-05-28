int printf(const char *, ...);
union {
  signed a;
  signed b : 18;
} static c[4] = {642345};
int main() {
  int d = 0;
  for (; d < 4; d++) {
    printf("", c[d].a);
    printf("%d\n", c[d].b);
  }
  return 0;
}
