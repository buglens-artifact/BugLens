int printf(const char *, ...);
long a;
void b(c) { printf("%X\n", c); }
void d() {}
int main() {
  d(a);
  b();
  return 0;
}
