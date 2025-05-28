int printf(const char *, ...);
union {
  signed a : 4;
  signed b : 1;
} c = {4};
int main() {
  printf("%d\n", c.a, c.b);
  return 0;
}
