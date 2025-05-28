int printf(const char *, ...);
union {
  int a : 13;
  signed b : 15;
} c = {6140};
int main() {
  printf("%d\n", c.a, c.b);
  return 0;
}
