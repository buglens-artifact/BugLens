int printf(const char *, ...);
struct {
  signed a : 1;
} b;
char c;
int d;
int *e = &d;
char *f = &c;
int main() {
  *f = b.a = e != 0;
  printf("%d\n", c);
  return 0;
}
