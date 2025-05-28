int printf(const char *, ...);
union {
  unsigned a;
  unsigned b : 28;
} const c = {939116220};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
