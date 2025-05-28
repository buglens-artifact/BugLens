int printf(const char *, ...);
int a;
union {
  char b;
  signed c : 1;
} d[] = {4};
void e(f) { a = f; }
int main() {
  e(d[0].b & d[0].c);
  printf("%X\n", a);
  return 0;
}
