int printf(const char *, ...);
struct a {
  signed b : 10;
} c[9][9][3], *e = &c[8][2][1];
static struct a d = {8}, i;
int f, g, h;
static struct a j() { return d; }
int main() {
  i = j();
  *e = i;
  for (; f < 9; f++) {
    g = 0;
    for (; g < 9; g++) {
      h = 0;
      for (; h < 3; h++)
        printf("%d\n", c[f][g][h].b);
    }
  }
}
