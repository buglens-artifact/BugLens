int printf(const char *, ...);
union {
  signed a : 20;
  int b;
} c = {913656};
int main() {
  printf("%d\n", c.a, c.b);
  return 0;
}
