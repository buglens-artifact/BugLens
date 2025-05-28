int printf(const char *, ...);
int a, e, f, g;
char b, c;
short d[10][3][8] = {{}, {}, {}, {}, {}, {}, {}, {}, {{}, 0, 1}};
int main() {
  for (; b <= 2; b++) {
    c = 0;
    for (; c <= 2; c++) {
      a = 2;
      for (; a >= 0; a--)
        d[c + 7][b][b] = d[b + 7][b][a + 1];
    }
  }
  for (; e < 10; e++) {
    f = 0;
    for (; f < 3; f++) {
      g = 0;
      for (; g < 8; g++)
        printf("%d\n", d[e][f][g]);
    }
  }
}
