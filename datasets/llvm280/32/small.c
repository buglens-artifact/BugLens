int printf(const char *, ...);
struct a {
  signed b : 13;
};
int c;
static struct a d = {1}, e;
int *f = &c;
static struct a g() { return d; }
int main() {
  e = g();
  struct a h = e;
  *f = h.b;
  printf("%d\n", c);
}
