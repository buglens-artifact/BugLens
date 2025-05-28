int printf(const char *, ...);
union {
  int a;
  unsigned b : 27;
} c = {518347544};
int main() {
  printf("%d\n", c.a, c.b);
  return 0;
}
