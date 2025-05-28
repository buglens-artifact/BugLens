int printf(const char *, ...);
struct a {
  unsigned b : 24;
};
int c;
static struct a d = {1};
int *e = &c;
static struct a f() { return d; }
int main() {
  struct a g = f(), h = g;
  *e = h.b;
  printf("%d\n", c);
}
