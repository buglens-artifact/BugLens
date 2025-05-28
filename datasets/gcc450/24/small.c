int printf(const char *, ...);
int a;
short b;
void c(d) {
  a = d;
  b = 0;
}
int main() {
  c();
  printf("%d\n", a);
  return 0;
}
