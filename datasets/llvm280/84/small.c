int printf(const char *, ...);
struct {
  signed : 9;
  short a;
} b, c[9] = {{}};
int d, e;
void f(g) {
  e = 1;
  for (; e >= 0; e--) {
    c[5].a = d;
    c[e + 5] = b;
    d = ~0;
  }
}
int main() {
  f();
  printf("%d\n", c[5].a);
}
