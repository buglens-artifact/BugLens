int printf(const char *, ...);
union {
  signed a : 14;
  short b;
} c = {15603};
int main() {
  printf("%d\n", c.a, c.b);
  return 0;
}
