int printf(const char *, ...);
union {
  char a;
  unsigned b : 6;
} c = {113};
int main() {
  printf("%d\n", c.a, c.b);
  return 0;
}
