int printf(const char *, ...);
union {
  signed a;
  unsigned b : 28;
} const c = {793498379};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
