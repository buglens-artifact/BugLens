int printf(const char *, ...);
union {
  long a;
  unsigned b : 26;
  int c;
} const d[] = {77950524};
int main() {
  printf("", d[0].b);
  printf("%d\n", d[0].c);
  return 0;
}
