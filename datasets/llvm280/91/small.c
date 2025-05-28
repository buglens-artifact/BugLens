int printf(const char *, ...);
int a[108];
void b(c) { a[3 + c] = 3; }
int main() {
  b();
  printf("%d\n", a[3]);
}
