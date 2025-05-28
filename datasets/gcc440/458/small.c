int printf(const char *, ...);
struct {
  signed a : 5;
} b[] = {{}, {}, {}, {}, {}, {}, {}, -8L};
short c;
short *d = &c;
int main() {
  *d = b[7].a > ~4UL;
  printf("%d\n", c);
  return 0;
}
