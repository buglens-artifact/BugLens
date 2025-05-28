int printf(const char *, ...);
struct {
  signed a : 4;
  signed b : 8;
} c, d = {5};
int main() {
  c.b |= d.b;
  printf("%d\n", c.a);
}
