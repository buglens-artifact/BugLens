int printf(const char *, ...);
struct {
  unsigned a : 4;
  signed b : 4;
} c[][2] = {{}, {}, {}, {}, {{}, 30}}, d;
int main() {
  d.b |= c[4][1].b;
  printf("%d\n", d.a);
}
