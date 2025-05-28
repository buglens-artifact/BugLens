int printf(const char *, ...);
union {
  signed a : 5;
  unsigned b : 6;
} const c = {-5L};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
