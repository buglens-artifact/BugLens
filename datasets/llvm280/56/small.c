int printf(const char *, ...);
struct a {
  signed b : 20;
} static c = {4}, f;
short d;
short *e = &d;
static struct a g() { return c; }
int main() {
  f = g();
  struct a h = f;
  *e = h.b;
  printf("%d\n", d);
}
