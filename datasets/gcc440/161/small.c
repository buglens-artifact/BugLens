int printf(const char *, ...);
union {
  int a;
  signed b : 24;
} const c = {13202678};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
