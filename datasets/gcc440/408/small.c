int printf(const char *, ...);
union {
  int a;
  signed b : 27;
  int c;
} const d[] = {147420202};
int main() {
  printf("", d[0].b);
  printf("%d\n", d[0].c);
  return 0;
}
