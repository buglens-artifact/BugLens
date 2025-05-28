int printf(const char *, ...);
struct a {
  unsigned b : 4;
} c, d, *e = &c;
int f;
short(g)() { return 0; }
static struct a k() {
  struct a h = {8};
  char i;
  for (; f;) {
    i = g();
    for (; i;) {
      struct a *j = &h;
      *j = d;
    }
  }
  return h;
}
int main() {
  *e = k();
  printf("%d\n", c.b);
}
