int printf(const char *, ...);
union {
  int a;
  unsigned b : 28;
  int c;
} const d[] = {4129906432};
int main() {
  printf("", d[0].b);
  printf("%d\n", d[0].c);
  return 0;
}
