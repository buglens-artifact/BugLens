int printf(const char *, ...);
int b, c, p, d, g, q;
char e, i, k, n, r;
struct {
  signed g : 10;
} a;
int *h, *m;
short j;
volatile int l;
int **f = &h;
char(u)() { return b ?: b; }
long(v)() { return c ?: c; }
short w() {
  int *o = 0;
  *f = &d;
  *h ^= u();
  a.g = p;
  r = i + e;
  r &&l;
  i && (i = q);
  short s[2][4] = {};
  b = v();
  if (b)
    j && (o = &g);
  else
    return 8;
  short *t = &s[0][1];
  t && (n = 0);
  k = m == o;
  return 1;
}
int main() {
  w();
  printf("%d\n", a.g);
  return 0;
}
