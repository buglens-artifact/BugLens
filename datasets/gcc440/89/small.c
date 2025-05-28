int printf(const char *, ...);
union {
  int a;
  signed b : 27;
} const c = {105862069};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
