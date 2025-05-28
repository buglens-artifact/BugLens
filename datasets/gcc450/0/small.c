int printf(const char *, ...);
long a, b;
struct {
  short c;
  unsigned d;
  signed : 4;
} e[40];
int f[2];
volatile int g, k;
volatile long h;
int *l = &f[0];
long(m)() { return 0; }
void main() {
  int i, j;
  b = m(0);
  *l = a;
  *l &&g;
  h;
  if (*l)
    k;
  i = 0;
  for (; i < 2; i++) {
    printf("%d\n", f[i]);
    j = 0;
    for (; j < 8; j++) {
      printf("", e[i]);
      printf("", e[i * 5 + j].d);
      printf("", e[i * 5 + j]);
    }
  }
}
