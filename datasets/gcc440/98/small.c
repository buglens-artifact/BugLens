int printf(const char *, ...);
union {
  int a;
  unsigned b : 26;
} const c = {74659222};
int main() {
  printf("", c.a);
  printf("%d\n", c.b);
  return 0;
}
