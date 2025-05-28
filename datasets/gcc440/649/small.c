int printf(const char *, ...);
union {
  int a;
  unsigned b : 29;
} const c = {4163857950};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
