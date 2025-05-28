int printf(const char *, ...);
union {
  int a : 28;
  int b;
} c = {765391107};
int main() {
  printf("%d\n", c.a, c.b);
  return 0;
}
