int printf(const char *, ...);
union a {
  signed b : 2;
  short c;
};
short d;
static union a e = {};
static union a f() { return e; }
int main() {
  union a g = f(), h = g;
  for (; d != 2; d = d + 6)
    if (h.c)
      printf("%d\n", d);
}
