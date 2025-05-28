int printf(const char *, ...);
struct a {
  signed b : 12;
};
char c = 3;
static struct a d = {1};
char e(struct a f) {
  for (; c; c--)
    if (f.b)
      return f.b;
  return 2;
}
static struct a g() { return d; }
int main() {
  struct a h = g();
  e(h);
  printf("%d\n", c);
}
