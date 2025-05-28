int printf(const char *, ...);
struct a {
  signed b : 17;
} static d = {3}, e;
int c;
static struct a f() { return d; }
int main() {
  e = f();
  struct a g = e;
  if (g.b)
    printf("%d\n", c);
}
