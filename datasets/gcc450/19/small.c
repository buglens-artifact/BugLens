int printf(const char *, ...);
int b, g, a;
short c, f, i;
volatile int d;
char e, k;
char *j = &e;
int *l;
short(m)() { return 0; }
int *n() { return 0; }
static char o(p) {
  f = (++*j && d ? 0 : 0) - p;
  i = m(0);
  return a;
}
char fn4() {
  int h[408];
  *&h[50];
  return c;
}
int main() {
  k = fn4();
  l = n(o(k), 0, 0, g, b);
  printf("%d\n", e);
  return 0;
}
