int printf(const char *, ...);
union {
  int a;
  signed b : 29;
} const c = {726474436};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
