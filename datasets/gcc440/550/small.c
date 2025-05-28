int printf(const char *, ...);
union {
  signed a;
  unsigned b : 26;
} c = {79144007};
int main() {
  printf("%d\n", c.a, c.b);
  return 0;
}
