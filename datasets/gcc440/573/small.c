int printf(const char *, ...);
union {
  int a;
  unsigned b : 18;
} c = {558454};
int main() {
  printf("%d\n", c.a, c.b);
  return 0;
}
