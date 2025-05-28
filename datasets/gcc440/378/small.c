int printf(const char *, ...);
union {
  int a;
  signed b : 28;
} c = {888902447};
int main() {
  printf("%d\n", c.a, c.b);
  return 0;
}
