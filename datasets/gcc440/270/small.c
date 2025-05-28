int printf(const char *, ...);
union {
  long a : 27;
  int b;
} c = {8446744073709551615};
int main() {
  printf("%d\n", c.a, c.b);
  return 0;
}
