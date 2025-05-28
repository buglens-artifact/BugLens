int printf(const char *, ...);
struct a {
  unsigned b : 7;
} c, *d = &c;
static struct a e() {
  struct a f = {4};
  return f;
}
int main() {
  struct a g = e();
  *d = g;
  printf("%d\n", c.b);
}
