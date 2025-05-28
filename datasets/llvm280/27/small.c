int printf(const char *, ...);
struct a {
  signed b : 9;
} static c = {6};
int d;
int *e = &d;
static int(f)(g) { return g; }
static int h(struct a g) {
  int i = *e = f(g.b);
  return i;
}
int main() {
  h(c);
  printf("%d\n", d);
}
