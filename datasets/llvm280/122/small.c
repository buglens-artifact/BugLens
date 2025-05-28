int printf(const char *, ...);
struct a {
  unsigned b;
  unsigned c;
  signed d;
};
char e;
char *f = &e;
static int g(struct a h) { return h.d; }
void i() {
  struct a j = {1, 7, 1};
  if (g(j))
    *f = 5;
}
int main() {
  i();
  printf("%d\n", e);
}
