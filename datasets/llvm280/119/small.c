int printf(const char *, ...);
struct a {
  signed b : 7;
} c, *d = &c;
static struct a e() {
  struct a f = {};
  return f;
}
int main() {
  *d = e();
  printf("%d\n", c.b);
}
