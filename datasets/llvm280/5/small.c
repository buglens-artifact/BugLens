int printf(const char *, ...);
struct {
  short a;
  signed b : 10;
} c, d[][1] = {{}, {}, 1};
int main() {
  c.b ^= d[2][0].b;
  printf("%d\n", c.a);
}
