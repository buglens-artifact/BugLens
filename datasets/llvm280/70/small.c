int printf(const char *, ...);
int a[][1] = {{}, {}, {}, {}, {}, {}, {}, 8};
int b;
void c();
void d() { c(); }
void c(int e, long f) {
  for (; f <= 2; f++)
    b = a[f + 5][0];
}
int main() {
  d();
  printf("%d\n", b);
}
