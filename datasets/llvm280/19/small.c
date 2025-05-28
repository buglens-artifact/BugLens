int printf(const char *, ...);
int a[8][5] = {{}, {}, {}, {}, 1, 4};
int b;
char c;
void d(e) {
  for (; c <= 4; c++) {
    b |= a[c + 3][c];
    a[e + 4][1] = 0;
  }
}
int main() {
  d();
  printf("%d\n", b);
}
