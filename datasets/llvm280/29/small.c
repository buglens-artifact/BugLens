int printf(const char *, ...);
struct a {
  short b : 5;
};
short c;
static struct a d = {1};
char e;
int f;
short *g = &c;
static int(h)(i) { return i; }
static signed char *const j(struct a i) {
  f = h(i.b);
  *g = f;
  return &e;
}
int main() {
  j(d);
  printf("%d\n", c);
}
