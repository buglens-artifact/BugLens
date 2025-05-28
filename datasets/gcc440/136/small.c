int printf(const char *, ...);
union {
  int a;
  unsigned b;
  unsigned c : 24;
} const d[] = {57512966};
int main() {
  printf("", d[0].b);
  printf("%d\n", d[0].c);
  return 0;
}
