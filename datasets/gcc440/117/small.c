int printf(const char *, ...);
struct a {
  unsigned b;
  int c;
};
int d;
void e(struct a f) { d = f.b; }
int main() {
  struct a g[7];
  e(g[6]);
  printf("%d\n", d);
  return 0;
}
