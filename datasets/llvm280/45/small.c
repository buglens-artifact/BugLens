int printf(const char *, ...);
struct a {
  unsigned b : 12;
};
int c;
static struct a d = {5};
int *e = &c;
static struct a f() { return d; }
int main() {
  struct a g = f(), h = g;
  *e = h.b;
  printf("%d\n", c);
}
