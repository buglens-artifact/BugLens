int printf(const char *, ...);
char a[] = {4, 2, 6, 2, 4, 4};
int b;
void c(unsigned d) {
  long e = d >> 24;
  b ^= e;
}
int main() {
  c(a[2]);
  printf("%d\n", b);
}
