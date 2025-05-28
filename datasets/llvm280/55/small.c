int printf(const char *, ...);
int a, b, c, d;
static int e[10][9][2];
void f(g) { printf("%X\n", g); }
void h(g) { a = g; }
int main() {
  for (; b < 10; b++) {
    c = 0;
    for (; c < 9; c++) {
      d = 0;
      for (; d < 2; d++) {
        long i = e[b][c][d];
        h(i >> 56 & 5);
      }
    }
  }
  f(a);
}
