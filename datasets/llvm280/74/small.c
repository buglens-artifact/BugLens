int printf(const char *, ...);
int a;
void b();
void c() { b(); }
void b(char *d, long e) {
  for (; e <= 6; e++)
    a = 8;
}
int main() {
  c();
  printf("%d\n", a);
}
