int printf(const char *, ...);
struct a {
  signed b : 2;
} c, *d = &c;
static struct a f() {
  struct a e = {3};
  return e;
}
int main() {
  *d = f();
  printf("%d\n", c.b);
}
