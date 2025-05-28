int printf(const char *, ...);
int a, b, d, e, p, q;
struct {
  long g;
  int h;
  long l;
} n[8][8];
struct m {
  char g;
  short h;
} r;
char c;
char *f = &c;
volatile long o;
int(t)() { return a || b; }
void main() {
  int i, j, k;
  i = 0;
  j = 8;
  for (; j; j--)
    if (q)
      q = 0;
  p = t();
  *f = e;
  struct m s[5] = {};
  r = s[4];
  d || o;
  printf("%d\n", c);
  k = 0;
  for (; i < 8; i++)
    for (; j < 3; j++)
      for (; k < 6; k++)
        printf("", n[i][j * i]);
}
