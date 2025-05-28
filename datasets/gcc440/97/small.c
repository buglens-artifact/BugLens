int printf(const char *, ...);
union {
  signed a;
  signed b : 28;
} const c = {211752089};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
