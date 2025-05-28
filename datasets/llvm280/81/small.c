int printf(const char *, ...);
struct {
  long a;
  signed b;
} c[8] = {{}, {}, {}, {}, {}, 9, 50};
int d;
void e() {
  int f = 0;
  for (; f < 1; f++) {
    d = 6;
    for (; d; d--) {
      c[5].b = 0;
      c[d + 1] = c[d];
    }
  }
}
int main() {
  e();
  printf("%d\n", c[6].b);
}
