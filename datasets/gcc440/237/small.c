int printf(const char *, ...);
union {
  short a;
  signed b : 10;
} const c = {970};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
