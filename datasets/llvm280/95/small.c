int printf(const char *, ...);
int a, d = 4;
long b;
char c;
short e;
int *f = &d;
int main() {
  int *g = &a;
  int **h = &g;
  c = 2;
  for (; c; c--) {
    short *i = &e;
    b = 0;
    for (; b <= 3; b++)
      *g = 0;
    *i = d;
    *h = f;
  }
  printf("%d\n", e);
}
