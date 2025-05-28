int printf(const char *, ...);
union {
  int a;
  unsigned b : 26;
} const c = {108636971};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
