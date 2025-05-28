int printf(const char *, ...);
struct a {
  signed b : 8;
} d;
short c;
static struct a f() {
  struct a e = {1};
  return e;
}
int main() {
  d = f();
  struct a g = d;
  g.b || printf("%d\n", c);
}
