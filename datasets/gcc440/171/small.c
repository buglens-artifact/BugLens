int printf(const char *, ...);
union {
  long a : 31;
  int b;
} const c = {-2L};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
