int printf(const char *, ...);
union {
  int a;
  signed b : 24;
  int c;
} const d[] = {72372434};
int main() {
  printf("", d[0].b);
  printf("%d\n", d[0].c);
  return 0;
}
