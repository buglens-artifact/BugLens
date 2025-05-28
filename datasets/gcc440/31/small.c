int printf(const char *, ...);
union a {
  int b;
  unsigned c : 27;
};
int d, f, b;
short e, h;
int *a;
static int *g = &d;
char i, j;
char *k(union a l) {
  if (l.b)
    for (; e;) {
      for (; d;) {
        h = l.b;
        return &j;
      }
      *a = f;
    }
  *g = l.c;
  return &i;
}
void m() {
  union a c = {46744073709551615};
  for (; b < 1; b++)
    k(c);
}
int main() {
  m();
  printf("%d\n", d);
  return 0;
}
