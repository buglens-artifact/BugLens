int printf(const char *, ...);
union {
  signed a : 12;
  short b;
} const c = {3890};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
