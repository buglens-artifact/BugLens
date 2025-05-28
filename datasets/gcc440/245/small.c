int printf(const char *, ...);
union {
  long a : 18;
  int b;
} c = {237026};
int main() {
  printf("%d\n", c.a, c.b);
  return 0;
}
