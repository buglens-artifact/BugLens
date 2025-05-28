int printf(const char *, ...);
struct a {
  signed b;
};
char c, d;
signed char e();
void f() { e(); }
signed char e(struct a g) {
  d = g.b;
  return c;
}
int main() {
  f();
  printf("%d\n", d);
}
