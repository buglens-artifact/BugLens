int printf(const char *, ...);
#pragma pack(1)
struct a {
  signed b : 10;
  unsigned : 25;
  unsigned : 24;
} c;
static struct a d() {
  struct a e[1][2][1] = {};
  return e[0][1][0];
}
int main() {
  struct a f = d();
  c = f;
  printf("%d\n", c.b);
}
