int printf(const char *, ...);
int a, b, c, d;
static int e[3][4][9];
void f(g) { printf("%X\n", g); }
void h(g) { a = g; }
int main() {
  for (; b < 3; b++) {
    c = 0;
    for (; c < 4; c++) {
      d = 0;
      for (; d < 9; d++) {
        long i = e[b][c][d];
        h(i >> 56 & 5);
      }
    }
  }
  f(a);
}
