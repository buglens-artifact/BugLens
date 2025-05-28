int printf(const char *, ...);
union {
  int a;
  unsigned b : 17;
} const c = {765392};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
