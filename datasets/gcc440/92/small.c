int printf(const char *, ...);
union {
  int a;
  signed b : 29;
} const c = {1110808854};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
