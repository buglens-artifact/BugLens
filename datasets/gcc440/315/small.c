int printf(const char *, ...);
union {
  int a;
  signed b : 21;
} c = {2617122};
int main() {
  printf("%d\n", c.a, c.b);
  return 0;
}
