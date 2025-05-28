int printf(const char *, ...);
union {
  int a;
  signed b : 27;
} c = {404319447};
int main() {
  printf("%d\n", c.a, c.b);
  return 0;
}
