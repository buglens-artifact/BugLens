int printf(const char *, ...);
struct a {
  unsigned b;
};
long c[6][1];
long *d = &c[4][0];
int e;
void f();
void g() { f(); }
void f(struct a h) { *d = h.b; }
int main() {
  g();
  for (; e < 6; e++)
    printf("%d\n", (int)c[e][0]);
  return 0;
}
