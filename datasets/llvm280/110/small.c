int printf(const char *, ...);
struct a {
  signed b : 2;
} c, *d = &c;
static struct a e() {
  struct a f = {1};
  return f;
}
int main() {
  *d = e();
  printf("%d\n", c.b);
}
