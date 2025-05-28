int printf(const char *, ...);
union {
  signed a : 2;
  char b;
} const c = {3};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
