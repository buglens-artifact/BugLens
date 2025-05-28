int printf(const char *, ...);
struct a {
  unsigned b : 24;
} static c = {4}, d, e, *f = &d;
static struct a g() { return c; }
int main() {
  e = g();
  *f = e;
  printf("%d\n", d.b);
}
