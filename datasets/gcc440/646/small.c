int printf(const char *, ...);
union {
  signed a : 11;
  short b;
} static c = {3119};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
