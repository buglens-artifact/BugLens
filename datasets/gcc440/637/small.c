int printf(const char *, ...);
union {
  int a : 25;
  int b;
} const c = {27808811};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
