int printf(const char *, ...);
union {
  int a;
  unsigned b : 22;
} c = {4073709551608};
int main() {
  printf("%d\n", c.a, c.b);
  return 0;
}
