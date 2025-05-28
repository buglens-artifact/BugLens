int printf(const char *, ...);
struct a {
  signed b;
};
short c;
short *d = &c;
void e();
void f() { e(); }
void e(struct a g) { *d = g.b; }
int main() {
  f();
  printf("%d\n", c);
}
