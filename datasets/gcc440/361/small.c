int printf(const char *, ...);
union {
  signed a;
  signed b : 26;
} c = {202478006};
int main() {
  printf("%d\n", c.a, c.b);
  return 0;
}
