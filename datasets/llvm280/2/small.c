int printf(const char *, ...);
struct a {
  signed b : 21;
} static c = {5}, d, e;
static struct a f() { return c; }
int main() {
  e = f();
  d = e;
  printf("%d\n", d.b);
}
