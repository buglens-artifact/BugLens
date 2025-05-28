int printf(const char *, ...);
union {
  int a;
  signed b : 24;
} const c = {72295147};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
