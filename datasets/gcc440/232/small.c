int printf(const char *, ...);
union {
  signed a : 1;
  unsigned b : 6;
} const c = {1};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
