int printf(const char *, ...);
union {
  int a;
  signed b : 30;
} c = {2204218686};
int main() {
  printf("%d\n", c.a, c.b);
  return 0;
}
