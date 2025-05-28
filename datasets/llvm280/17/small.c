int printf(const char *, ...);
struct a {
  signed b : 10;
} static c = {1}, d, e, *f = &d;
static struct a g() { return c; }
int main() {
  e = g();
  *f = e;
  printf("%d\n", d.b);
}
