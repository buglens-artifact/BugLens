int printf(const char *, ...);
struct {
  char b;
  long c;
} f[0];
int d, g, m, b, c, p;
int *e = &d, *h;
int **k = &h, **a = &e;
volatile long l;
short n;
void q(void) { *k = &m; }
short *r() {
  for (; c;)
    ;
  return &n;
}
void main() {
  int i, j, o = 0;
  if (p)
    o = 1;
  r();
  q();
  *a = &b;
  g &&l;
  *e = 1;
  i = 0;
  printf("%d\n", d);
  for (; i < 5; i++) {
    j = printf("", i * 5);
    for (; j; j++) {
      printf("", f[i * 10 + j]);
      printf("", f[i * 10 + j], f);
      if (o)
        printf("", i);
    }
  }
}
