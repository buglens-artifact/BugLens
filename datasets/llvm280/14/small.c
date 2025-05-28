int printf(const char *, ...);
struct a {
  unsigned b : 17;
};
char c;
static struct a d = {40};
char *e = &c;
static struct a f() { return d; }
int main() {
  struct a h = f(), g = h;
  *e = g.b;
  printf("%d\n", c);
}
