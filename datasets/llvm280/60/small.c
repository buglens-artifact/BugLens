int printf(const char *, ...);
struct a {
  signed b : 27;
} g[10] = {{}}, j;
int c, d, e, f, h, i;
void k() {
  struct a l;
  c = 0;
  for (; c <= 0; c++) {
    d = 2;
    for (; d >= 0; d--) {
      for (; e;)
        for (; f; f--)
          l.b ^= 3;
      h = 0;
      for (; h >= 0; h--) {
        i = 5;
        for (; i; i--)
          j = g[0] = g[d + 7];
      }
      struct a m = {280};
      g[7] = m;
    }
  }
}
int main() {
  k();
  printf("%d\n", j.b);
}
