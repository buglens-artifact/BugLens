int printf(const char *, ...);
int a;
int *b;
long c;
short d = 57700;
long(e)(long f, long g) { return f <= 0 && g && f; }
int main() {
  b = &a;
  c = e(d & 4294967293, d);
  *b = c;
  printf("%d\n", a);
  return 0;
}
