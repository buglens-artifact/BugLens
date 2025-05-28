int printf(const char *, ...);
struct {
  volatile int a;
} b[9][7][4];
volatile int c, d, e, l;
char f;
long g;
void n() {
  int a[112] = {};
  int *h[] = {&a[6]};
  --e;
}
int main() {
  int i, j, k, m = 0;
  if (l)
    m = 1;
  n();
  f = e;
  d &&c;
  g = i = 0;
  for (; i < 9; i++) {
    j = 0;
    for (; j < 7; j++) {
      k = 0;
      for (; k < 4; k++) {
        printf("", b[i][j][k]);
        b[i][j][k].a;
        if (m)
          printf("", j, k);
      }
    }
  }
  printf("%d\n", f);
  return 0;
}
