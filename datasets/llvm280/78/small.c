int printf(const char *, ...);
int a, b, c;
static int d[9][3];
void e(f) { a = f; }
int main() {
  for (; b < 9; b++) {
    c = 0;
    for (; c < 3; c++) {
      long g = d[b][c];
      e(g >> 48 & 15);
    }
    printf("%X\n", a);
  }
}
