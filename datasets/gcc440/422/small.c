int printf(const char *, ...);
union {
  int a;
  unsigned b : 19;
} const c = {4073709551609};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
