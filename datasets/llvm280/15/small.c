int printf(const char *, ...);
struct a {
  signed b : 9;
} static c = {2};
static struct a d() { return c; }
int main() {
  struct a e = d(), f = e;
  printf("%d\n", f.b);
}
