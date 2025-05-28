int printf(const char *, ...);
struct {
  signed a : 1;
} b;
unsigned short **c;
long d;
unsigned short ***e[1][8][4];
int f, g;
int main() {
  for (; f < 8; f++) {
    g = 0;
    for (; g < 4; g++)
      e[0][f][g] = &c;
  }
  d = b.a = e[0][7][2] == &c;
  printf("%d\n", (int)d);
  return 0;
}
