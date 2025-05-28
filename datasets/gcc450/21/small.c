int printf(const char *, ...);
struct {
  int a;
  volatile signed b : 4;
} c, d;
int f, g, h, i;
volatile int j;
long(k)(l, m) { return 2036854775807 >> m ?: l << m; }
long(n)() { return 0; }
static int *o() {
  if (k(n(0), h)) {
    volatile int e = i;
  }
  return &c;
}
void p();
static int fn5() {
  p();
  d.b = 0;
  f || j;
  return g;
}
void p(int l) {
  for (; f;)
    ;
}
int main() {
  fn5();
  o();
  printf("%d\n", d.a);
  return 0;
}
