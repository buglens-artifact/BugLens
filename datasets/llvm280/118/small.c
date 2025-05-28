int printf(const char *, ...);
struct a {
  signed b : 4;
} e;
char c;
char *d = &c;
static struct a g() {
  struct a f = {3};
  return f;
}
int main() {
  e = g();
  struct a h = e;
  *d = h.b;
  printf("%d\n", c);
}
