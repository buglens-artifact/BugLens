int printf(const char *, ...);
union {
  signed a : 21;
  int b;
} c = {6038614};
int main() {
  printf("%d\n", c.a, c.b);
  return 0;
}
