int printf(const char *, ...);
union {
  int a;
  unsigned b : 25;
} const c = {221617323};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
