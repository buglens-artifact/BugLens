int printf(const char *, ...);
struct a {
  signed b : 16;
} c, *e = &c;
static struct a d = {3};
static struct a f() { return d; }
int main() {
  *e = f();
  printf("%d\n", c.b);
}
