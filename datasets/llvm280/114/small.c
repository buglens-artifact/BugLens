int printf(const char *, ...);
struct a {
  unsigned b : 3;
} c[8][1];
int d;
static struct a f() {
  struct a e = {3};
  return e;
}
int main() {
  c[3][0] = f();
  for (; d < 8; d++)
    printf("%d\n", c[d][0].b);
}
