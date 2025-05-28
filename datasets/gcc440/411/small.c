int printf(const char *, ...);
struct {
  signed a : 1;
} b;
int c, d;
int main() {
  d = b.a = 4 != c;
  printf("%d\n", d);
  return 0;
}
