int printf(const char *, ...);
union {
  int a : 20;
  int b;
} const c = {18446744073709551610};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
