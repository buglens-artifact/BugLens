int printf(const char *, ...);
union {
  int a;
  unsigned b : 13;
  short c;
} const d[] = {50824};
int main() {
  printf("", d[0].b);
  printf("%d\n", d[0].c);
  return 0;
}
