int printf(const char *, ...);
union {
  signed a : 29;
  int b;
} const c = {447019919};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
