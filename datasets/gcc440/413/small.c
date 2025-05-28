int printf(const char *, ...);
union {
  int a : 7;
  char b;
} const c = {-1L};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
