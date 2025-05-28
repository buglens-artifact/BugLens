int printf(const char *, ...);
struct {
  int a;
} b[24];
int c;
int main() {
  int d;
  for (; c < 3; c++)
    for (; d < 4;) {
      d = 0;
      for (; d < 6; d++)
        printf("%d\n", b[d].a);
    }
  return 0;
}
