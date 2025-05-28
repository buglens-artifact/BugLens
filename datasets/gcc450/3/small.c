int printf(const char *, ...);
short a, b;
char c;
int d;
char *e = &c;
short(f)(g) { return 0 || g ?: a; }
int main() {
  f(d);
  b = f();
  *e = b;
  printf("%d\n", c);
  return 0;
}
