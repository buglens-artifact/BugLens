int printf(const char *, ...);
short a, b;
int c;
char d;
int *e = &c;
unsigned short(f)(short g, short h) { return g + h; }
void i(short *g, short *h) {
  b = 4;
  *h &= *g;
  *e = f(61114, *h);
}
int main() {
  a = 0 != d;
  i(&a, &b);
  printf("%d\n", c);
  return 0;
}
