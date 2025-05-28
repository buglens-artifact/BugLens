int printf(const char *, ...);
struct a {
  signed b : 13;
};
int c;
static struct a d = {4}, e;
static struct a f() { return d; }
int main() {
  e = f();
  struct a g = e;
  if (g.b)
    printf("%d\n", c);
}
