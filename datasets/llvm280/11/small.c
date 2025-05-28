int printf(const char *, ...);
struct a {
  unsigned b : 22;
};
int c;
int *d = &c;
static struct a e = {5}, f;
static struct a g() { return e; }
int main() {
  f = g();
  struct a h = f;
  *d = h.b;
  printf("%d\n", c);
}
