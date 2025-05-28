int printf(const char *, ...);
struct a {
  signed b : 10;
} static c = {4}, d, *e = &d;
static struct a f() { return c; }
int main() {
  *e = f();
  printf("%d\n", d.b);
}
