int printf(const char *, ...);
union {
  signed a : 11;
  short b;
} const c = {7305};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
