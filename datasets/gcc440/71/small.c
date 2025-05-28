int printf(const char *, ...);
union {
  int a : 3;
  char b;
} const c = {4};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
