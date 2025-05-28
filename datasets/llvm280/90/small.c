int printf(const char *, ...);
int a, d, e, f, g;
char b;
int c[6][8];
static char h(i) {
  for (; b <= 4; b++) {
    d = 0;
    for (; d <= 5; d++) {
      a = 0;
      for (; a <= 7; a++)
        c[b][a] ^= c[d][b] = i;
    }
  }
  return e;
}
int main() {
  h(9);
  for (; f < 5; f++) {
    g = 0;
    for (; g < 8; g++)
      printf("%d\n", c[f][g]);
  }
}
