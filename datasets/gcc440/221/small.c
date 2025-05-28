int printf(const char *, ...);
union {
  signed a : 22;
  int b;
} const c = {3957890};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
