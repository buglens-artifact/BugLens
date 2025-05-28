int printf(const char *, ...);
union {
  signed a : 15;
  signed b : 10;
} const c = {2071};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
