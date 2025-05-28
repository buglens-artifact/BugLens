int printf(const char *, ...);
struct {
  signed a : 1;
} b;
int c;
char d = 10;
int *e = &c;
int main() {
  *e = b.a = 0 != d;
  printf("%d\n", c);
  return 0;
}
