int printf(const char *, ...);
union {
  int a;
  signed b : 31;
} c = {2305140934};
int main() {
  printf("%d\n", c.a, c.b);
  return 0;
}
