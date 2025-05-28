int printf(const char *, ...);
struct a {
  unsigned b : 19;
} c = {2};
static struct a d() {
  struct a e[3] = {};
  return e[2];
}
int main() {
  c = d();
  printf("%d\n", c.b);
}
