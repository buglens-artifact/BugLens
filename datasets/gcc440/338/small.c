int printf(const char *, ...);
union {
  int a;
  unsigned b : 29;
} c = {2269795666};
int main() {
  printf("%d\n", c.a, c.b);
  return 0;
}
