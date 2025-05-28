int printf(const char *, ...);
union {
  int a;
  signed b : 24;
} c = {12021262};
int main() {
  printf("%d\n", c.a, c.b);
  return 0;
}
