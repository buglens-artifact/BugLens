int printf(const char *, ...);
int a, b;
unsigned short c();
void d(int *e) {
  b = *e;
  if (b)
    a = 5;
}
long f() {
  int g = c();
  return g;
}
unsigned short c() {
  char h;
  int *i;
  int j;
  d(&j);
  return 0;
}
int main() {
  f();
  printf("%d\n", a);
}
