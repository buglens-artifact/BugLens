int printf(const char *, ...);
union {
  int a;
  unsigned b : 28;
} const c = {2136096755};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
