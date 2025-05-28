int printf(const char *, ...);
struct a {
  signed b : 9;
} static c = {3}, f;
short d;
short *e = &d;
static struct a g() { return c; }
int main() {
  f = g();
  struct a h = f;
  *e = h.b;
  printf("%d\n", d);
}
