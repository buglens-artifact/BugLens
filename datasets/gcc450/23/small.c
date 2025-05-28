int printf(const char *, ...);
char a;
char *b = &a;
long c;
long(d)(e) { return e ?: e; }
int main() {
  c = d();
  *b = c;
  printf("%d\n", a);
  return 0;
}
