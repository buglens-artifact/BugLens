int printf(const char *, ...);
long a;
long b[2][8][2];
char c;
short d;
int e, f, g;
int main() {
  for (; a <= 1; a++) {
    c = 1;
    d = 0;
    for (; d <= 2; d++) {
      b[1][c][1] = 1;
      --b[a][1][a];
    }
  }
  for (; e < 2; e++) {
    f = 0;
    for (; f < 8; f++) {
      g = 0;
      for (; g < 2; g++)
        printf("%d\n", (int)b[e][f][g]);
    }
  }
}
